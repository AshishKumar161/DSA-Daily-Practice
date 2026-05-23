#include <iostream>
using namespace std;

int main() {
     system("cls");

     int arr[100] , n ;
        cout << "Enter the size of the array: " ;
        cin >> n;

        cout << "Enter the elements of the array: "<<  "\n" ;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "\n Array " << "\n" ;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " ;
        }

        cout << "\n Maximum element is: " ;
        int max = arr[0] ;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i] ;
            }
        }
        cout << max ;


        cout << "\n Minimum element is: " ;
        int min = arr[0] ;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i] ;
            }
        }
        cout << min ;

     system("pause");
     system("cls");
     return 0;
}