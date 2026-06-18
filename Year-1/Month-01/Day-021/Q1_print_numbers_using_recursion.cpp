#include <iostream>
using namespace std;

void recursion(int i , int n)
{
    if (i > n)
    {
        return ;
    }
    
    else
    {
        cout << i << " " ;
        recursion(i + 1 , n) ;
    }
}

int main() {
     system("cls");

     int n ;
     cout << "Enter the Number: " ;
     cin  >> n ;

     recursion(1 , n) ;
    
      
     system("pause");
     system("cls");
     return 0;
}


#include <iostream>

int main() {
     system("cls");
     
      
     system("pause");
     system("cls");
     return 0;
}