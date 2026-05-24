#include <iostream>
using namespace std;

int main() {
     system("cls");
     int arr[100] , n ;
     
     cout << "Enter the size of array: " ;
     cin  >>  n ;

     cout << "Enter the element of array " "\n" ;
     for (int  i = 0; i < n; i++)
     {
        cin >> arr[i] ;
     }

     cout << "Array " << "\n" ;
     for (int  i = 0; i < n; i++)
     {
        cout << arr[i] << " " ;
     }
     
     cout << "\nEnter the element to be searched: " << "\n" ;
     int key ;
     cin >> key  ;
     bool found = false ;

    for (int  i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout <<  i << " is the index of the element in the array" << "\n" ;
            found = true ;
        }
        
    }
    
    if (!found)
    {
        cout << "Element not found in the array" << "\n" ;
    }
      
     system("pause");
     system("cls");
     return 0;
}