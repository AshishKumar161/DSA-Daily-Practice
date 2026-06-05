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
            head =  newNode ;
        }
        
    }

    void search(int key)
    {
        Node* temp ;
        temp = head ;
        int position  = 1 ;

        while (temp != NULL)
        {
            if (temp -> data == key)
            {
                cout << "Element found at Node: " << position << "\n" ;
                return ;
            }
            temp = temp -> next ;
            position++ ;
        }
        cout << "Element not found" << "\n" ;
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

int main() {
     system("cls");

     list ll ;

     ll.push_front(1) ;
     ll.push_front(2) ;
     ll.push_front(3) ;
     ll.push_front(4) ;

     cout << "Linked List:" << "\n" ;
     ll.display() ;

     int key = 3 ;

     cout << "Search: " << key << "\n" ;
     ll.search(key) ;

     system("pause");
     system("cls");
     return 0;
}