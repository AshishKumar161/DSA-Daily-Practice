#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue 
{
    int arr[SIZE] ;
    int front, rear ;

public:
    CircularQueue() 
    {
        front = -1 ;
        rear = -1 ;
    }

    bool isFull() 
    {
        if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front)) 
        {
            return true ;
        }
        return false ;
    }

    bool isEmpty() 
    {
        if (front == -1) 
        {
            return true ;
        }
        return false ;
    }

    void enqueue(int value)  
    {
        if (isFull()) 
        {
            cout << "Queue is Full" << "\n" ;
            return ;
        }

        if (front == -1) 
        {
            front = 0 ;
            rear = 0 ;
        }
        else if (rear == SIZE - 1) 
        {
            rear = 0 ;
        }
        else 
        {
            rear++ ;
        }

        arr[rear] = value ;
        cout << "Enqueue: " << value << "\n" ;
    }

    void dequeue() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is Empty" << "\n" ;
            return ;
        }

        cout << "Dequeue: " << arr[front] << "\n" ;

        if (front == rear) 
        {
            front = -1 ;
            rear = -1 ;
        }
        else if (front == SIZE - 1)
         {
            front = 0 ;
        }
        else 
        {
            front++ ;
        }
    }

    void display() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is Empty" << "\n" ;
            return ;
        }

        cout << "Circular Queue: " ;

        int i = front ;

        while (true) 
        {
            cout << arr[i] << " " ;

            if (i == rear) 
            {
                break ;
            }

            i = (i + 1) % SIZE ;
        }

        cout << "\n" ;
    }
};

int main() {
    
    system("cls");

    CircularQueue q;

    q.enqueue(10) ;
    q.enqueue(20) ;
    q.enqueue(30) ;
    q.enqueue(40) ;
    q.enqueue(50) ; 

    q.display() ;

    q.dequeue() ;
    q.dequeue() ;

    q.display() ;

    q.enqueue(60) ;
    q.enqueue(70) ;

    q.display() ;

    system("pause");
    system("cls");
    return 0;
}