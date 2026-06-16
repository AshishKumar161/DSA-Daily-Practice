#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n == 0)
    {
        return 0 ;
    }

    else
    {
        return (n % 10) + recursion(n / 10) ;
    }
    
}

int main() {
     system("cls");
    
     int n ;
     cout << "Enter the Number: " ;
     cin >> n ;

     cout << "Sum of digits = " << recursion(n) << "\n" ;
    
     system("pause");
     system("cls");
     return 0;
}