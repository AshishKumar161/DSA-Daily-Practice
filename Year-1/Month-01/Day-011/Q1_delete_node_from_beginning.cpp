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

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void deleteFirst(Node*& head) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original List:" << endl;
    display(head);

    deleteFirst(head);

    cout << "After deletion:" << endl;
    display(head);

    return 0;
}