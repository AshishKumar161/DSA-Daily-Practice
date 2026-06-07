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

    bool detectLoop()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }

        return false;
    }

    void createLoop()
    {
        // Creating loop:
        // 10 -> 20 -> 30 -> 40
        //       ↑           ↓
        //       ← ← ← ← ← ←

        tail->next = head->next;
    }
};

int main()
{
    system("cls");

    List l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    l.createLoop();

    if (l.detectLoop())
    {
        cout << "Loop detected" << endl;
    }
    else
    {
        cout << "No loop detected" << endl;
    }

    system("pause");
    system("cls");
    return 0;
}

