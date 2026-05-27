#include <iostream>
using namespace std;

class Stack
{
    int top ;
    int arr[100] ;
    
    public:
    Stack()
    {
        top = -1 ; 
    }

    void push (int val)
    {
        if(top == 99)
        {
            cout << "Stack overflow" << "\n" ;
        }
        else 
        {
            top++ ;
            arr[top] = val ;
        }
    }

    void pop()
    {
        if(top == -1) 
        {
            cout << "Stack underflow" << "\n" ;
        }
        else
        {
            top-- ;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<< "\n" ;
        }
        else
        {
            for(int  i = top ; i >= 0 ; i--)
            {
                cout<<arr[i]<<" " ;
            }
            cout << "\n" ;
        }
    }

};

int main() {
     system("cls");
     
        Stack s ;
        s.push(10) ;
        s.push(20) ;
        s.push(30) ;
        s.display() ;
        s.pop() ;
        s.display() ;

     system("pause");
     system("cls");
     return 0;
}