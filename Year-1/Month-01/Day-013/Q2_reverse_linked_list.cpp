



#include <iostream>
using namespace std;

class Node
{
    public:
    int data ;
    Node* next ;

    Node(int data )
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

    // void reverse()
    // {
    //     while (head != NULL)
    //     {
    //         Node* temp ;
    //         temp = head ;
    //         while (temp != NULL)
    //         {
    //             temp = temp -> next ;
    //         }
    //         cout << tail -> data << "->" ;
    //         delete tail ;
    //         tail = temp ;
    //         temp -> next = NULL ;
    //     }
    //     cout << "NULL" << "\n" ;

    // }


    void reverse()
    {
        Node* prev = NULL ;
        Node* curr = head ;
        Node* next = NULL ;

        tail = head ;

        while (curr != NULL)
        {
            next = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = next ;
        }
        head = prev ;
    }

    void display()
    {
        Node* temp = head ;

        while (temp != NULL)
        {
            cout << temp -> data << " -> " ;
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
     
     cout << "Linked List: " << "\n" ;
     ll.display() ;

     ll.reverse() ;
     
     cout <<"Reverse Linked List: " << "\n" ;
     ll.display() ;

     system("pause");
     system("cls");
     return 0;
}