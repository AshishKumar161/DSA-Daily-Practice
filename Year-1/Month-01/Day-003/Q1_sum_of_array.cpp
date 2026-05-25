#include <iostream>
using namespace std;

int main() {
     system("cls");
   
     int arr[100] , n ;
     cout << "Enter the size of array " ; 
     cin  >> n ; 

     cout << "Enter the element 0of array " << "\n" ;
     for (int  i = 0 ; i < n ; i++)
     {
        cin >> arr[i] ;
     } 
     
     cout << "Array " << "\n" ;
     for (int  i = 0; i < n ; i++)
     {
        cout << arr[i] << " " ;
     }
     
     int sum = 0 ;

     cout << "\nSum of array is: " ;
     for (int  i = 0; i < n; i++)
     {
        sum += arr[i] ;
     }
     cout << sum ;
     

     system("pause");
     system("cls");
     return 0;
}