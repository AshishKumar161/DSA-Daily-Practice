#include <iostream>
using namespace std;

int main() {
     system("cls");

     int arr[100], n ;

        cout << "Enter the size of the array: " ;
        cin >> n;

        cout << "Enter the elements of the array: " << "\n" ;

        for (int i  = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "\n Array " << "\n" ;

        for (int i  = 0; i < n; i++)
        {
            cout << arr[i] << " " ;
        }

        cout << "\n Reversed Array " << "\n" ;

        for (int i  = n - 1; i >= 0; i--)    
        {
            cout << arr[i] << " " ;
        }
        
        
      
     system("pause");
     system("cls");
     return 0;
}