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

class list
{
public:
    Node *head;

    list()
    {
        head = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void print()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void search(int key)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Element found" << endl;
                return;
            }

            temp = temp->next;
        }

        cout << "Element not found" << endl;
    }
};

int main()
{
    system("cls");

    list ll;

    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);

    cout << "Linked List:" << endl;
    ll.print();

    int key = 30;

    cout << "Search: " << key << endl;
    ll.search(key);

    system("pause");
    system("cls");
    return 0;
}