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

    void deleteAtPosition(int position)
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        if (position <= 0)
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;

        for (int i = 1; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid position" << endl;
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
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

    cout << "Original List:" << endl;
    ll.print();

    int position = 3;

    cout << "Delete position: " << position << endl;
    ll.deleteAtPosition(position);

    cout << "After deletion:" << endl;
    ll.print();

    system("pause");
    system("cls");
    return 0;
}