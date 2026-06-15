#include <iostream>
using namespace std;

double recursion(int n)
{

    if (n == 1 || n == 0) 
    {
        return 1 ;
    }
    
    else
    {
        return n * recursion(n-1) ;
    }

}

int main() {
     system("cls");
    
     int n ;
     cout << "Enter the Number: " << "\n" ;
     cin >> n ;

     cout << "Factorial = " << recursion(n) << "\n" ;

     system("pause");
     system("cls");
     return 0;
}