#include <iostream>
#include <string>
using namespace std;

template <class T>
class BaseStack {
protected:
    int top;
    T arr[100];
public:
    BaseStack() {
        top = -1;
    }
    void push(T x) {
        if(top == 99) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            arr[top] = x;
        }
    }
    void pop() {
        if(top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }
    T peek() {
        if(top == -1) {
            return "";
        }
        return arr[top];
    }
    bool empty() {
        return top == -1;
    }
    void display() {
        for(int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
        cout << endl;
    }
};

class CodeEditorStack : public BaseStack<string> {
public:
    void edit(string codeChange) {
        push(codeChange);
        cout << "Applied change: " << codeChange << endl;
    }
};

class UndoStack : public BaseStack<string> {
public:
    void undo(CodeEditorStack &editor, RedoStack &redo) {
        if(editor.empty()) {
            cout << "No changes to undo" << endl;
        } else {
            string lastChange = editor.peek();
            editor.pop();
            redo.push(lastChange);
            cout << "Undo: " << lastChange << endl;
        }
    }
};

class RedoStack : public BaseStack<string> {
public:
    void redo(CodeEditorStack &editor) {
        if(empty()) {
            cout << "No changes to redo" << endl;
        } else {
            string change = peek();
            pop();
            editor.push(change);
            cout << "Redo: " << change << endl;
        }
    }
};

int main() {
    CodeEditorStack editor;
    UndoStack undo;
    RedoStack redo;

    editor.edit("Added main function");
    editor.edit("Declared variables");
    editor.edit("Implemented loop");

    cout << "\nCurrent editor state:" << endl;
    editor.display();

    
    undo.undo(editor, redo);
    undo.undo(editor, redo);

    cout << "\nEditor after undo:" << endl;
    editor.display();

    
    redo.redo(editor);
    redo.redo(editor);

    cout << "\nEditor after redo:" << endl;
    editor.display();

    return 0;
}