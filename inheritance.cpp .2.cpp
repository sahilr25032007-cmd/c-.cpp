#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* dummy = new Node(0);
    Node* current = dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int x = (l1) ? l1->data : 0;
        int y = (l2) ? l2->data : 0;

        int sum = x + y + carry;
        carry = sum / 10;
        current->next = new Node(sum % 10);
        current = current->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy->next;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    Node* l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    
    Node* l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);

    Node* result = addTwoNumbers(l1, l2);

    cout << "Sum: ";
    printList(result); 

    return 0;
}