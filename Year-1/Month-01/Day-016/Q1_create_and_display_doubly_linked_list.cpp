#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void display()
    {
        Node *temp = head;

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
    system("cls");
    DoublyList dl;

    dl.push_back(10);
    dl.push_back(20);
    dl.push_back(30);

    cout << "Doubly Linked List:" << endl;
    dl.display();

    dl.push_front(5);

    cout << "After inserting node at beginning:" << endl;
    dl.display();

    system("pause");
    system("cls");
    return 0;
}