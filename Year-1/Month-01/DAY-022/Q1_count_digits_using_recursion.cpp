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
        return 1 + recursion(n/10) ;
    }
    
}

int main() {
     system("cls");
    
     int n ;
     cout << "Enter the Number: ";
     cin >> n ;

     if (n == 0)
     {
        cout << "Total digit: 1 " << "\n" ;
     }

     else
     {
        cout << "Totel digits: " << recursion(n) << "\n" ;
     }
     
     
      
     system("pause");
     system("cls");
     return 0;
}