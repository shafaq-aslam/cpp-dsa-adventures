#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter any number for a: ";
    cin >> a;

    cout << "Enter any number for b: ";
    cin >> b;

    // Bitwise & (AND)
    cout << (a & b) << endl;

    // Bitwise | (OR)
    cout << (a | b) << endl;

    // Bitwise ^ (XOR)
    cout << (a ^ b) << endl;
    return 0;
}