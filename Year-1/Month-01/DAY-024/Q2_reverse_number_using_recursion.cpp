#include <iostream>
using namespace std;

int recursion(int  n , int rev)
{
    if (n == 0)
    {
        return rev ;
    }
    
    else
    {
        int digit = n % 10 ;
        rev = rev * 10 + digit ;

        return recursion(n/10 , rev);
    }
    
}

int main() {
     system("cls");
    
     int n ;
     cout << "Enter the Number " ;
     cin >> n ;

     int rec = 0 ;

     cout << "Reverse: " << recursion(n , rec) << "\n" ;

      
     system("pause");
     system("cls");
     return 0;
}