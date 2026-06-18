#include <iostream>
using namespace std;

int fibonacci(int n)
{

    if (n == 0)
    {
        return 0 ;
    }

    if (n == 1)
    {
        return 1 ;
    }

    return fibonacci(n - 1) + fibonacci(n - 2) ;
}

int main()
{
    system("cls");

    int n ;

    cout << "Enter N: " ;
    cin >> n ;

    cout << "Fibonacci number = " << fibonacci(n) << "\n" ;

    system("pause");
    system("cls");
    return 0;
}