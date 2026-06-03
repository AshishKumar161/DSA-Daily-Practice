// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data ;
//     Node* next ;

//     Node(int value)
//     {
//         data = value ;
//         next = NULL ;
//     }
// };

// void display(Node* head)
// {
//     Node* temp = head ;

//     while (temp != NULL)
//     {
//         cout << temp->data << " -> " ;
//         temp = temp->next ;
//     }

//     cout << "NULL" << "\n" ;
// }

// int main() {
//     system("cls");

//     Node* head = new Node(10) ;
//     Node* second = new Node(20) ;
//     Node* third = new Node(30) ;

//     head->next = second ;
//     second->next = third ;

//     cout << "Linked List:" << "\n" ;
//     display(head) ;

//     system("pause");
//     system("cls");
//     return 0;
// }

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class list
{
public:
    Node *head;

    list()
    {
        head = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void print()
    {
        Node *temp;
        temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    system("cls");

    list ll;
    ll.push(55);
    ll.push(25);
    ll.push(555);

    ll.print();

    system("pause");
    system("cls");
    return 0;
}

