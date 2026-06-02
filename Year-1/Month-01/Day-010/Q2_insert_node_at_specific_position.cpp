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

void insertAtPosition(Node*& head, int value, int position) {
    Node* newNode = new Node(value);

    // Insert at beginning
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Move to node before the given position
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            cout << "Invalid position" << endl;
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
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
    system("cls");

    Node* head = NULL;

    // Creating original list: 10 -> 20 -> 40
    insertAtPosition(head, 10, 1);
    insertAtPosition(head, 20, 2);
    insertAtPosition(head, 40, 3);

    cout << "Original List:" << endl;
    display(head);

    // Insert 30 at position 3
    insertAtPosition(head, 30, 3);

    cout << "After insertion:" << endl;
    display(head);

    system("pause");
    system("cls");
    return 0;
}