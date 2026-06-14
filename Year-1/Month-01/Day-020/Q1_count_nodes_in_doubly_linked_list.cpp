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

    int count_nodes()
    {
        int count = 0;
        Node *temp = head;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
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
    l.push_back(40);

    cout << "Doubly Linked List:" << endl;
    l.display();

    cout << "Total nodes = " << l.count_nodes() << endl;

    return 0;
}