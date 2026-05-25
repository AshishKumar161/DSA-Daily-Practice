#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int arr[100], n ;
    cout << "Enter the size of array " ;
    cin >> n ;

    cout << "Enter the element 0of array " << "\n" ;
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    cout << "Array " << "\n" ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }

    int even_count = 0, odd_count = 0 ;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++ ;
        }
        else
        {
            odd_count++ ;
        }
    }

    cout << "\nEven numbers: " << even_count << "\n" ;
    cout << "Odd numbers: " << odd_count << "\n" ;

    system("pause");
    system("cls");
    return 0;
}