#include <iostream>
using namespace std;

class Node
{
public:
    int data ;
    Node * prev ;
    Node * next ;

    Node(int data)
    {
        this -> data = data ;
        this -> prev = NULL ;
        this -> next = NULL ;
    }
};

class DoublyList
{
public:
    Node * head ;
    Node * tail ;

    DoublyList()
    {
        head = tail = NULL ;
    }

    void push_back(int val)
    {
        Node * newNode = new Node(val) ;

        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }

        tail -> next = newNode ;
        newNode -> prev = tail ;
        tail = newNode ;
    }

    void push_front(int val)
    {
        Node * newNode = new Node(val) ;

        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }

        newNode -> next = head ;
        head -> prev = newNode ;
        head = newNode ;
    }

    void insert_at_position(int val, int pos)
    {
        if (pos <= 0)
        {
            cout << "Invalid position" << endl;
            return ; 
        }

        if (pos == 1)
        {
            push_front(val) ;
            return ;
        }

        Node * temp = head;

        for (int i = 1; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of range" << endl;
                return ;
            }

            temp = temp -> next ;
        }

        if (temp == NULL)
        {
            cout << "Position out of range" << endl;
            return ;
        }

        if (temp == tail)
        {
            push_back(val) ;
            return ;
        }

        Node *newNode = new Node(val) ;

        newNode -> next = temp -> next ;
        newNode -> prev = temp ;

        temp -> next -> prev = newNode ;
        temp -> next = newNode ;
    }

    void display()
    {
        Node * temp = head ;

        cout << "NULL <- " ;

        while (temp != NULL)
        {
            cout << temp -> data ;

            if (temp -> next != NULL)
            {
                cout << " <-> " ;
            }

            temp = temp -> next ;
        }

        cout << " -> NULL" << endl;
    }
};

int main()
{
    system("cls");

    DoublyList dl ;

    dl.push_back(10) ;
    dl.push_back(20) ;
    dl.push_back(40) ;

    cout << "Original List:" << endl;
    dl.display() ;

    dl.insert_at_position(30, 3) ;

    cout << "After inserting 30 at position 3:" << endl;
    dl.display() ;

    system("pause");
    system("cls");
    return 0;
}