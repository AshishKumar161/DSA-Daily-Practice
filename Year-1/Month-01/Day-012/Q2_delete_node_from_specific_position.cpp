#include <iostream>
using namespace std;

class Node
{
    public:
    int data ;
    Node* next ;

    Node (int data)
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
    
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is empty" << "\n" ;
            return ;
        }
        Node* temp ;
        temp = head ;
        head = head->next ;
        delete temp ;
    }
    
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List is empty" << "\n" ;
            return ;
        }

        if (head == tail)
        {
            delete head ;
            head = tail = NULL ;
            return ;
        }

        Node* temp ;
        temp = head ;
        while (temp ->next  != tail )
        {
            temp = temp -> next ;
        }
        delete tail ;
        tail = temp ;
        temp -> next = NULL ;
    }

    void display()
    {
        Node* temp ;
        temp = head ;
        while (temp != NULL)
        {
            cout << temp->data << " ->" ;
            temp = temp->next ;
        }
        cout << "NULL" << "\n" ;
    }

    void popped_at_index(int pos)
    {
        if (head == NULL)
        {
            cout << "Linked is empty" << "\n" ;
            return ;
        }

        if (pos <= 0)
        {
            cout << "Invalid position" << "\n" ;
            return ;
        }

        if (pos == 1)
        {
            pop_front();
            return ;
        }

        Node* temp ;
        temp = head ;

        for (int  i = 1; i < pos - 1 ; i++)
        {
            if (temp == NULL || temp -> next == NULL)
            {
                cout << "Position out of range" << "\n" ;
                return ;
            }
            temp = temp -> next ;
        }
        
        if (temp -> next == NULL)
        {
            cout << "Position out of range" << "\n" ;
            return ;
        }

        if (temp -> next == tail )
        {
            pop_back() ;
            return ;
        }
        
        Node* deleteNode = temp -> next ;
        temp -> next = deleteNode -> next ;
        delete deleteNode ;
        
        
    }

};

int main() {
     system("cls");

     list ll;

     ll.push_front(4) ;
     ll.push_front(3) ;
     ll.push_front(2) ;
     ll.push_front(1) ;

     cout << "Original List: ";
     ll.display();

     ll.popped_at_index(3);

     cout << "After deleting position 3: ";
     ll.display();

     system("pause");
     system("cls");
     return 0;
}