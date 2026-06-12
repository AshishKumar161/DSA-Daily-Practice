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
        Node* newNode = new Node(val) ;

        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }
        
        else
        {
            newNode -> next = head  ;
            head = newNode ;
        }
        
    }

    void nth_end_node (int n)
    {

        if (head == NULL )
        {
            cout << "List is Empty " << "\n" ;
            return ;
        }
        

        Node* first = head ;
        Node* second = head ;

        for (int i = 0; i < n; i++)
        {
            if (first == NULL)
            {
                cout << "Invalid Value of N: " << "\n" ;
                return ;
            }
            
            first = first -> next ; 
        }
        
        while (first != NULL )
        {
            first = first -> next ;
            second = second -> next ;
        }
        
        cout << "Nth Node From End: " << second -> data << "\n" ;
 
    }

    void display()
    {
        Node* temp ;
        temp = head ;
        while (temp != NULL)
        {
            cout << temp -> data << "->" ;
            temp = temp -> next ;
        }
        cout << "NULL" << "\n" ;
    }

};

int main() {
     system("cls");
     
     list ll ;

     ll.push_front(1) ;
     ll.push_front(2) ;
     ll.push_front(3) ;
     ll.push_front(4) ;
     ll.push_front(5) ;
     ll.push_front(6) ; 
     ll.push_front(7) ;
     ll.push_front(8) ; 
     ll.push_front(9) ;
     ll.push_front(10) ;

     cout << "Linked List: " << "\n" ;
     ll.display() ;


     ll.nth_end_node(5) ;


     system("pause");
     system("cls");
     return 0;
}
