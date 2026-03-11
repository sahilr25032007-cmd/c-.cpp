
#include<iostream>

using namespace std;
class Node{ // Node class to represent each node in the linked list, which contains an integer data and a pointer to the next node. 
    public: // the constructor initializes the data and sets the next pointer to nullptr.
    int data; // pointer to the next node in the list. The constructor initializes the data and sets the next pointer to nullptr.
    Node* next; // the pointer is of node type, which allows us to create a linked list by connecting nodes together.
    Node(int val){
        data = val;
        next = nullptr;
    }
};
// Function to display the linked list
void display(Node* head){
    Node* p = head;
    while(p){
        cout<<p->data<<"->";
        p = p->next;
    }
    cout<<"NULL";
};

Node* insertatstart(Node * head,int y){
    Node * x1 = new Node(y);
    x1->next = head;
    return x1;
}

void insertatend(Node* first,int y){
    Node* x1 = new Node(y);
    Node* p = first;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = x1;
}



int main(){
    system("CLS");
    Node* n1 = new Node(20);
    Node* n2 = new Node(30);
    Node* n3 = new Node(12);
 
    n1->next = n2;   
    n2->next = n3;
    
     display(n1);
     cout<<"\n";
     Node* z = insertatstart(n1,101);
        display(z);
        cout<<"\n";
        insertatend(z,2000);
        display(z);
            
          
        
    return 0;
}


/*
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        
 int temp = arr[start];
   arr[start] = arr[end];
     arr[end] = temp;
   start++;
  end--;
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    print(arr, n);

    reverseArray(arr, n);

    cout << "Reversed array: ";
    print(arr, n);

    return 0;
}
*/