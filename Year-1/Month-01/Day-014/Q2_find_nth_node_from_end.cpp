#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
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
        tail = newNode;
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void nth_from_end(int n)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *first = head;
        Node *second = head;

        // Move first pointer n steps ahead
        for (int i = 0; i < n; i++)
        {
            if (first == NULL)
            {
                cout << "Invalid value of n" << endl;
                return;
            }

            first = first->next;
        }

        // Move both pointers until first reaches NULL
        while (first != NULL)
        {
            first = first->next;
            second = second->next;
        }

        cout << "Nth node from end = " << second->data << endl;
    }
};

int main()
{
    List l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);

    int n = 2;

    cout << "Linked List:" << endl;
    l.display();

    cout << "n = " << n << endl;

    l.nth_from_end(n);

    return 0;
}
