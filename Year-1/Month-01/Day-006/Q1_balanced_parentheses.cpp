#include <iostream>
using namespace std;

#define SIZE 100

class Stack
{
    char arr[SIZE] ;
    int top ;

public:
    Stack()
    {
        top = -1 ;
    }

    void push(char ch)
    {
        if (top == SIZE - 1)
        {
            cout << "Stack Overflow" ;
        }
        
        else
        {
            top++ ; 
            arr[top] = ch ;
        }
    }

    char pop()
    {
        if (top == -1)
        {
            return '\0' ;
        }

        else
        {
            char ch = arr[top] ;
            top-- ;
            return ch ; 
        }
    }

    bool isEmpty()
    {
        return top == -1 ;
    }
};

bool isBalanced(string s)
{
    Stack st ;

    for (int  i = 0; i < s.length(); i++)
    {
        char ch = s[i] ;

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch) ;
        }

        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.isEmpty())
            {
                return  false ; 
            }

            char top = st.pop() ;

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
            {
                return false ;
            }
        }
    }

    return st.isEmpty() ;
}

int main()
{
    system("cls");

    string brackets;

    cout << "Enter brackets: " ;
    cin >>  brackets ;

    if (isBalanced(brackets))
    {
        cout << "Balanced Parentheses" ;
    }
    else
    {
        cout << "Not Balanced Parentheses" ;
    }

    system("pause");
    system("cls");
    return 0;
}