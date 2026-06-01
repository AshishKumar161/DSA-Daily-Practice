#include <iostream>
using namespace std;

#define SIZE 5

class Queue 
{
    int arr[SIZE] ;
    int front, rear ;

public:
    Queue() 
    {
        front = -1 ;
        rear = -1 ;
    }

    bool isEmpty() 
    {
        return front == -1 || front > rear ;
    }

    bool isFull()  
    {
        return rear == SIZE - 1 ;
    }

    void enqueue(int value) 
    {
        if (isFull()) 
        {
            cout << "Queue is Full!" << "\n" ;
            return ;
        }

        if (front == -1) 
        {
            front = 0 ;
        }

        rear++ ;
        arr[rear] = value ;
        cout << value << " inserted into queue." << "\n" ;
    }

    void dequeue() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is Empty!" << "\n" ;
            return ; 
        }

        cout << arr[front] << " deleted from queue." << "\n" ;
        front++ ;

        if (front > rear)
         {
            front = rear = -1 ;
        }
    }

    void peek() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is Empty!" << "\n" ;
        }
        else 
        {
            cout << "Front element is: " << arr[front] << "\n" ;
        }
    }

    void display() 
    {

        if (isEmpty()) 
        {
            cout << "Queue is Empty!" << "\n" ;
            return ;
        }

        cout << "Queue elements: " ;
        for (int  i = front; i <= rear; i++) 
        {
            cout << arr[i] << " " ;
        }
        cout << "\n" ;
    }
} ;

int main() {
    
    system("cls");

    Queue q ;

    q.enqueue(10) ;
    q.enqueue(20) ;
    q.enqueue(30) ;

    q.display() ;

    q.peek() ;

    q.dequeue() ;

    q.display() ;

    cout << "Is Queue Empty? " ;
    if (q.isEmpty())
    {
        cout << "Yes" << "\n" ;
    }
    else
    {
        cout << "No" << "\n" ;
    }

    cout << "Is Queue Full? " ;
    if (q.isFull())
    {
        cout << "Yes" << "\n" ;
    }
    else
    {
        cout << "No" << "\n" ;
    }

    system("pause");
    system("cls");
    return 0;
}