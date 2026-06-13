#include <iostream>
using namespace std;

class Node 
{
    public:
    int data ;
    Node* next ;
    Node* prev ;

    Node(int data)
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

    void push_back(int val)
    {
        Node* newNode = new Node(val) ;
        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }
        else
        {
            tail -> next = newNode ;
            newNode -> prev = tail ;
            tail = newNode ;
        }
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

    void insert_at_position(int val , int pos)
    {
        if (pos <= 0)
        {
            cout << "Invalid Position" << "\n" ;
            return ;
        }
        
        if (pos == 1)
        {
            push_front(val) ;
            return ;
        }
        
        Node* temp ;
        temp = head ;

        for (int  i = 0; i < pos -1 ; i++)
        {
            if (temp == NULL )
            {

                cout << "Position out of range" << "\n" ;
                return ;
            }

            temp = temp-> next ;
         }

         if (temp == NULL )
        {

             cout << "Position out of range" << "\n" ;
             return ;
        }

        if (temp == tail)
        {
            push_back(val) ;
            return ;
        }
        
        else
        {
            Node* newNode = new Node(val) ;

            newNode -> next = temp -> next ;
            newNode -> prev = temp ;

            temp -> next -> prev = newNode ;
            temp -> next = newNode ;
            
        }    
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

int main() {
     system("cls");

     list ll ;

     ll.push_back(10) ;
     ll.push_back(20) ;
     ll.push_back(40) ;

     cout << "Original List:" << "\n" ;
     ll.display() ;

     ll.insert_at_position(30, 3) ;

     cout << "After inserting 30 at position 3:" << "\n" ;
     ll.display() ;

     system("pause");
     system("cls");
     return 0;
}