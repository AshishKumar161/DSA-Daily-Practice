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
            newNode -> next = head ;
            head = newNode ;
        }
    }
    
    void find_midd ()
    {
        Node* slow = head ;
        Node* fast = head ;

        if (head == NULL)
        {
            cout << "NO Middle Node" << "\n" ;
            return ;
        }
        
        else
        {
            while (fast != NULL && fast -> next != NULL)
            {
                slow = slow -> next ;
                fast = fast -> next -> next ;
            }
          
            cout << "Middle Node: " << slow -> data << "\n" ;
            
        }
    
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

     cout << "Linked List:" << "\n" ;
     ll.display() ;

     ll.find_midd() ;

     system("pause");
     system("cls");
     return 0;
}