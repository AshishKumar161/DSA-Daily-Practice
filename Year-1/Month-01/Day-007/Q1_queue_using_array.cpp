#include <iostream>
using namespace std;

class Queue {
    int arr[100] ;
    int front,  rear ;

public:
    Queue()
    {
        front = -1 ;
        rear = - 1 ;
    }

    void enqueue(int value) 
    {
        if (rear == 99) 
        {
            cout << "Queue Overflow" << "\n" ;
            return ;
        }

        if (front == -1) 
        {
            front = 0 ;
        }

        rear++ ;
        arr[rear] = value ;

        cout << "Enqueue: " << value << "\n" ;
    }

    void dequeue() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "Queue Underflow" << "\n" ;
            return;
        }

        cout << "Dequeue: " << arr[front] << "\n" ;
        front++ ;
    }

    void display() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "Queue is empty" << "\n" ;
            return ;
        }

        cout << "Queue:" << "\n" ;
        for (int  i = front; i <= rear; i++) 
        {
            cout << arr[i] << " " ;
        }
        cout << "\n" ;
    }
};

int main() {
    
    system("cls");

    Queue q ;

    q.enqueue(10) ;
    q.enqueue(20) ;
    q.enqueue(30) ;

    q.display() ;

    q.dequeue() ;

    q.display() ;

    system("pause");
    system("cls");
    return 0;
}