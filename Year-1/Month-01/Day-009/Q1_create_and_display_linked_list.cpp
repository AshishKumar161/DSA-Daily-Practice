#include <iostream>
using namespace std;

class Node 
{
public:
    int data ;
    Node* next ;

    Node(int value) 
    {
        data = value ;
        next = NULL ;
    }
};

void display(Node* head) 
{
    Node* temp = head ;

    while (temp != NULL)
    {
        cout << temp->data << " -> " ;
        temp = temp->next ;
    }

    cout << "NULL" << "\n" ;
}

int main() {
    system("cls");

    Node* head = new Node(10) ;
    Node* second = new Node(20) ;
    Node* third = new Node(30) ;

    head->next = second ;
    second->next = third ;

    cout << "Linked List:" << "\n" ;
    display(head) ;

    system("pause");
    system("cls");
    return 0;
}