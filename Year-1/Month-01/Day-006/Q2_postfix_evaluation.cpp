#include <iostream>
using namespace std;

#define SIZE 100

class Stack
{
    int arr[SIZE] ;
    int top ;

public:
    Stack()
    {
        top = -1 ;
    }

    void push(int value)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow" ;
        }
        else
        {
            top++ ;
            arr[top] = value ;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" ;
            return -1 ;
        }
        else
        {
            int value = arr[top] ;
            top-- ;
            return  value ;
        }
    }
};

int evaluatePostfix(string exp)
{
    Stack st ;

    for (int i  = 0; i < exp.length(); i++)
    {
        char ch = exp[i] ;

        if (ch >= '0' && ch <= '9')
        {
            st.push(ch - '0');
        }
        
        else
        {
            int b = st.pop() ;
            int a = st.pop() ;

            if (ch == '+')
            {
                st.push(a + b) ;
            }
            else if (ch == '-')
            {
                st.push(a - b) ;
            }
            else if (ch == '*')
            {
                st.push(a * b) ;
            }
            else if (ch == '/')
            {
                st.push(a / b) ;
            }
        }
    }

    return st.pop() ;
}

int main()
{
    system("cls");

    string exp ;

    cout << "Enter postfix expression: " ;
    cin >> exp ;

    cout << "Result: " << evaluatePostfix(exp) ;

    system("pause");
    system("cls");
    return 0;
}