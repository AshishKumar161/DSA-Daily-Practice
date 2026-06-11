#include <iostream>
using namespace std;

class Node
{
public:
    int data ;
    Node* next ; 

    Node(int data)
    {
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

    void push_front(int val)
    {
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode  ;
            return ;
        }

        else
        {
            newNode->next = head ;
            head = newNode ;
        }
    }

    int count_node()
    {
        int count = 0 ;
        Node* temp ;
        temp = head ;
        while (temp != NULL)
        {
            count++ ;
            temp = temp -> next ;
        }
        return count ;
    }

    void display()
    {
        Node* temp ;
        temp = head ;

        while (temp != NULL)
        {
            cout << temp -> data << " ->" ;
            temp = temp -> next ;
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
    ll.push_front(4) ;

    cout << "Linked List: " << "\n" ;
    ll.display();

    cout << "Total nodes: " << ll.count_node() << "\n" ;

    system("pause");
    system("cls");
    return 0;
}