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

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    // If list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    // Move to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
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
    Node* head = NULL;

    insertEnd(head, 10);
    insertEnd(head, 20);

    cout << "Original List:" << endl;
    display(head);

    insertEnd(head, 30);

    cout << "After inserting 30 at end:" << endl;
    display(head);

    return 0;
}