#include <iostream>
using namespace std;

int main()
{
    int oddSum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            oddSum = oddSum + i;
        }
        i++;
    }
    cout << "Sum of all odd numbers are: " << oddSum;
    return 0;
}