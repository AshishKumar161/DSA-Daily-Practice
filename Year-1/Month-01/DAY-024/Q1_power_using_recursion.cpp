#include <iostream>
using namespace std;

double recursion(double n , double pow)
{
    if (pow == 0)
    {
        return 1 ;
    }
    
    else
    {
        return n * recursion(n , pow -1) ; 
    }
    
}

int main() {
     system("cls");
     
     double n ;
     cout << "Enter the Number: " ;
     cin >> n ;

     double pow ;
     cout << "Enter the Power: " ;
     cin >> pow ;

     cout << "Result: " << recursion(n , pow)  << "\n" ;
       
     system("pause");
     system("cls");
     return 0;
}