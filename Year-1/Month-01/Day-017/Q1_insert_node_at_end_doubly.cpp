#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class DoublyList
{
public:
    Node* head;
    Node* tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void display()
    {
        Node* temp = head;

        cout << "NULL <- ";

        while (temp != NULL)
        {
            cout << temp->data;

            if (temp->next != NULL)
            {
                cout << " <-> ";
            }

            temp = temp->next;
        }

        cout << " -> NULL" << endl;
    }
};

int main()
{
    DoublyList dl;

    dl.push_back(10);
    dl.push_back(20);

    cout << "Original List:" << endl;
    dl.display();

    dl.push_back(30);

    cout << "After inserting 30 at end:" << endl;
    dl.display();

    return 0;
}