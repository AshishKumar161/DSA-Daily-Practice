#include <iostream>
using namespace std;

void insertion_Sort(int arr[] , int n)
{
    for (int  i = 1 ; i < n; i++)
    {
        int curr = arr[i] ;
        int prev = i - 1 ;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev] ;
            prev-- ;
        }
        arr[prev +1] = curr ;
    }
    
}


int main() {
     system("cls");
     
     int arr[5] = {5,3,4,2,1} ;
     int n = 5 ;


      insertion_Sort(arr, n) ;

      cout << "\nAfter sorting:\n" ;
      
      for (int  i = 0; i < n; i++)
      {
         cout << arr[i] ;
      }

     system("pause");
     system("cls");
     return 0;
}