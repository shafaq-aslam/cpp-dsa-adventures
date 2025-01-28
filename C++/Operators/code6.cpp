#include <iostream>
using namespace std;

int main(){
    int a = 4;
    cout << "Value of a is: " << a << endl; // 4
    int b = ++a; // update, kaam

    cout << "Value of b is: " << b << endl; // 5
    cout << "Value of a is: " << a << endl; // 5
    return 0;
}