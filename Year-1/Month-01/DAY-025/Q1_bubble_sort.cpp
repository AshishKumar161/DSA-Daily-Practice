#include <iostream>
using namespace std;

int main() {
     system("cls");
    
     int n ;
     cout << "Enter the size of array: " ;
     cin >> n ;
     int arr[n] ;

     cout << "--------- Enter the Array element ---------- " << "\n" ; 
     for (int  i = 0; i < n; i++)
     {
        cout << "Element " << i+1 << ": "  ;
        cin >> arr[i] ; 
     }

     for (int  i = 0; i < n; i++)
     {
         cout << arr[i] << " " ;
     }

  
     for (int  i = 0; i < n-1; i++)
     {
        for (int  j = 0; j < n-1-i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] ,arr[j+1]) ;
            }
            
        }
        
     }

     cout << "Sorted array: " ;

     for (int i = 0; i < n; i++)
     {
         cout << arr[i] << " " ;
     }

     system("pause");
     system("cls");
     return 0;
}