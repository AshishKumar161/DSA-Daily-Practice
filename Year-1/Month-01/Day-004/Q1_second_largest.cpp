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
        int largest = arr[0] ;
        int second_largest = arr[0] ;
        for (int  i = 0; i < n ; i++)
        {
           if (arr[i] > largest)
           {
              second_largest = largest ;
              largest = arr[i] ;
           }
           else if (arr[i] > second_largest && arr[i] != largest)
           {
              second_largest = arr[i] ;
           }
        }
        cout << "Largest element is " << largest << "\n" ;
        cout << "Second largest element is " << second_largest << "\n" ;

     system("pause");
     system("cls");
     return 0;
}