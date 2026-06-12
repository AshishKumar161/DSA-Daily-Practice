

#include <iostream>
using namespace std;

class Node 
{
    public:
    int data ;
    Node* next ;
    Node* prev ;

    Node(int data )
    {
        this -> data = data ;
        this -> next = NULL ;
        this -> prev = NULL ;
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
        Node* newNode = new Node(val) ;

        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }

        else
        {
            newNode -> next = head ;
            head -> prev = newNode ;
            head = newNode ;
        }
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val) ;

       if (head == NULL)
       {
            head = tail =  newNode ;
            return ;
       }

       else
       {
            tail -> next = newNode ;
            newNode -> prev = tail ;
            tail = newNode ;
       }
    }

    void display()
    {
        Node* temp ;
        temp = head ;

        cout << "NULL" << " <- " ;

        while (temp != NULL)
        {
            cout << temp -> data ;

            if (temp -> next != NULL)
            {
                cout << " <-> " ;
            }
            
            temp = temp -> next ;
        }
        cout << " -> " << "NULL" << "\n" ;
    }

};

int main() {
     system("cls");
     
    list ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);

    cout << "Doubly Linked List:" << endl;
    ll.display();

    ll.push_front(5);

    cout << "After inserting node at beginning:" << endl;
    ll.display();
      
     system("pause");
     system("cls");
     return 0;
}