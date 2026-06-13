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
            newNode -> prev = tail ;
            tail -> next = newNode ;
            tail = newNode ;
        }
    }

    void reverse()
    {
         Node* curr = head ;
         Node* prev = NULL ;
         Node* next = NULL ;

         tail = head ;
         while (curr != NULL)
        {
            next = curr -> next ;
            curr -> next = prev ;
            curr -> prev = next ;
            prev = curr ;
            curr = next ;
        }
        head = prev ;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << "\n" ;
            return ;
        }

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

     list ll;

     ll.push_back(10);
     ll.push_back(20);
     ll.push_back(30);

     cout << "Original List:" << "\n";
     ll.display();

     ll.reverse();

     cout << "After Reverse:" << "\n";
     ll.display();

     system("pause");
     system("cls");
     return 0;
}