#include <iostream>
using namespace std;

int main()
{
    int evenSum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
        i++;
    }
    cout << "Sum of all even numbers are: " << evenSum;
    return 0;
}