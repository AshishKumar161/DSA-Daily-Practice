
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
        head = tail =  NULL ;
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

    bool detect_loop()
    {
        Node* slow = head ;
        Node* fast = head ;

        while (fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next ;
            fast = fast -> next -> next ;

            if (slow == fast )
            {
                return true ;
            }
        }
        
        return false ;
    }

        void create_loop()
    {
        // Creating loop:
        // 10 -> 20 -> 30 -> 40
        //       ↑           ↓
        //       ← ← ← ← ← ←

        tail->next = head->next;
    }

};

int main() {
     system("cls");

     list ll;

     ll.push_front(1) ;
     ll.push_front(2) ;
     ll.push_front(3) ;
     ll.push_front(4) ;
    
     ll.create_loop() ;

     if (ll.detect_loop())
     {
         cout << "Loop detected" << "\n" ;
     }

     else
     {
         cout << "No loop detected" << "\n" ;
     }

     system("pause");
     system("cls");
     return 0;
}