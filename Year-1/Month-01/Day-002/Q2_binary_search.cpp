#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int arr[100], n ; 

    cout << "Enter the size of array: " ;
    cin >> n ;

    cout << "Enter the element of array " << "\n" ;
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    cout << "Array " << "\n" ;
    for (int  i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }

    int start ;
    int end ;
    int mid ;
    bool found = false ;

    cout << "\nEnter the element to search: " ;

    int key ;
    cin >> key ;
    start = 0 ;
    end = n - 1 ;

    while (start <= end)
    {
        mid = (start + end) / 2 ;
        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << "\n" ;
            found = true ;
            break ;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1 ;
        }
        else
        {
            end = mid - 1 ;
        }
    }
    if (!found)
    {
        cout << "Element not found" << "\n" ;
    }

    system("pause");
    system("cls");
    return 0;
}