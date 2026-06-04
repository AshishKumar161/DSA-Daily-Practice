#include <iostream>
using namespace std;

class Node
{
 public:
    int data ;
    Node* next ;

    Node(int data)
    {
        this->data = data ;
        this->next = NULL ;
    }
};

class list
{
    public:
    Node* head;

    list()
    {
        head = NULL ;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val) ;
        if (head == NULL)
        {
            head = newNode ;
            return ;
        }
        else
        {
            newNode->next = head ;
            head = newNode ;
        }
    }

    void print()
    {
        Node* temp ;
        temp = head ;
        while (temp != NULL)
        {
            cout << temp->data << " -> " ;
            temp = temp->next ;
        }
        cout << "NULL" << "\n" ;
    }
};

int main()
{
    system("cls");

    list ll ; 
    ll.push_front(1) ;
    ll.push_front(2) ;
    ll.push_front(3) ;

    ll.print() ;

    system("pause");
    system("cls");
    return 0;
}