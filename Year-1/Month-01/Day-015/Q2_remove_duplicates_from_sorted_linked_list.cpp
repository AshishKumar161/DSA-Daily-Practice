

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

        if (head == NULL )
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

    void dublicates()
    {
        Node* curr = head ;

        while (curr != NULL && curr -> next != NULL)
        {
            if (curr -> data == curr -> next -> data)
            {
                Node* dublicate = curr -> next ;
                curr -> next = curr -> next -> next ;

                if (dublicate == tail)
                {
                    tail = curr ;
                }
                delete dublicate ;
            }
            else
            {
                curr = curr -> next ;
            }
            
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
     ll.push_front(5) ;
     ll.push_front(6) ;
     ll.push_front(7) ;
     ll.push_front(8) ;
     ll.push_front(9) ;

     cout << "Linked List:" << "\n";
     ll.display();

     
     ll.dublicates();

     ll.display();

     system("pause");
     system("cls");
     return 0;
}