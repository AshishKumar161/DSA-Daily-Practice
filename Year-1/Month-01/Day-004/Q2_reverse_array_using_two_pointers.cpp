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
        
        int start = 0 , end = n - 1 ;
        while (start < end)
        {
           swap(arr[start] , arr[end]) ;
           start++ ;
           end-- ;
        }
        
        cout << "\nReversed Array " << "\n" ;
        for (int  i = 0; i < n ; i++)
        {
           cout << arr[i] << " " ;
        }
      
     system("pause");
     system("cls");
     return 0;
}