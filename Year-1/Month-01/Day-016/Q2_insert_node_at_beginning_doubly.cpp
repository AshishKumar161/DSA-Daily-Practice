#include <iostream>
using namespace std;

class Node
{
public:
    Node* prev ;
    int data ;
    Node* next ;

    Node(int data)
    {
        this -> prev = NULL ;
        this -> data = data ;
        this -> next = NULL ;
    }
};

class list
{
public:
    Node* head ;
    Node* tail ;

    list()
    {
        head = tail = NULL ;
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val) ;

        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }

        tail -> next = newNode ;
        newNode -> prev = tail ;
        tail = newNode ;
    }

    void insertAtBeginning(int val)
    {
        Node* newNode = new Node(val) ;

        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }

        newNode -> next = head ;
        head -> prev = newNode ;
        head = newNode;
    }
 
    void display()
    {
        Node* temp = head ;

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

        cout << " -> NULL" << "\n" ;
    }
};

int main()
{
    system("cls");

    list ll ;

    ll.push_back(20) ;
    ll.push_back(30) ;

    cout << "Original List:" << "\n" ;
    ll.display() ;

    ll.insertAtBeginning(10) ;

    cout << "After inserting 10 at beginning:" << "\n" ;
    ll.display() ;

    system("pause");
    system("cls");
    return 0;
}

