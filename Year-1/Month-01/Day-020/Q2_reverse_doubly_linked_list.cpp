#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class list
{
public:
    Node *head;
    Node *tail;

    list()
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

    void reverse()
    {
        Node *curr = head;
        Node *temp = NULL;

        while (curr != NULL)
        {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }

        temp = head;
        head = tail;
        tail = temp;
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
    list l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    cout << "Original List:" << endl;
    l.display();

    l.reverse();

    cout << "After Reversing:" << endl;
    l.display();

    return 0;
}