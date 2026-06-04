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

    void insert_Node(int val , int pos)
    {
        Node* newNode = new Node(val) ;

        if (pos <= 0)
        {
            cout << "Invalid position" << "\n" ;
            return ;
        }
        
        if (pos == 1)
        {
            push_front(val) ;
            return ;
        }
        else
        {
            Node* temp ;
            temp = head ;

            for (int  i = 1; i < pos - 1; i++)
            {
                if (temp == NULL)
                {
                    cout << "Invalid Position" << "\n" ;
                    delete newNode ;
                    return ;
                }
                temp = temp -> next ;
            }

            if (temp == NULL)
            {
                cout << "Invalid Position" << "\n";
                delete newNode;
                return;
            }

            newNode -> next = temp -> next ;
            temp -> next = newNode ;
            
            if (newNode -> next == NULL)
            {
                tail = newNode ;
            }
            
        }
        
    }

    void display()
    {
        Node* temp ;
        temp  = head  ;

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

     cout << "Linked List: " << "\n" ;
     ll.display() ;

     ll.insert_Node(4 , 2) ;

     cout << "Linked List after insert: " << "\n" ;
     ll.display() ;
      
     system("pause");
     system("cls");
     return 0;
}
