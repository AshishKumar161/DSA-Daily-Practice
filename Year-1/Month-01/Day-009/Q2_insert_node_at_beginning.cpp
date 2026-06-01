#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void push_Front(Node*& head, int value) {
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(20);
    Node* second = new Node(30);

    head->next = second;

    cout << "Original List:" << endl;
    display(head);

    push_Front(head, 10);

    cout << "\nAfter inserting 10 at beginning:" << endl;
    display(head);

    return 0;
}