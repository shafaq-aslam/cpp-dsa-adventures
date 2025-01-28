#include <iostream>
using namespace std;

int main(){
    int a = 4;
    cout << "Value of a is: " << a << endl; // 4
    int b = a--; // kaam, update

    cout << "Value of b is: " << b << endl; // 4
    cout << "Value of a is: " << a << endl; // 3
    return 0;
}