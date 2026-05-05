#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* TOP; 

public:
    Stack() {
        TOP = nullptr;
    }

    
    void push(int x) {
        Node* p = new(nothrow) Node(); 
        if (p == nullptr) {
            cout << "Memory unavailable" << endl;
            return;
        }
        p->data = x;
        p->next = TOP; 
        TOP = p;       
    }

    
    int pop() {
        int y;
        if (TOP == nullptr) {
            cout << "Stack empty" << endl;
            return -1; 
        } else {
            y = TOP->data;      
            Node* p = TOP;     
            TOP = TOP->next;    
            delete p;           
            p = nullptr;        
            return y;
        }
    }

    bool isEmpty() {
        return TOP == nullptr;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    
    cout << "Popped: " << s.pop() << endl; 
    cout << "Popped: " << s.pop() << endl; 
    
    return 0;
}