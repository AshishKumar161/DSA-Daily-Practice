#include <iostream>
using namespace std;

int sum(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    // recursive case
    return n + sum(n - 1);
}

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "Sum = " << sum(n) << endl;

    return 0;
}