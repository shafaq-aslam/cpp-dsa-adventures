#include <iostream>
using namespace std;

int sum(int a, int b){
    a = a + 5; //10
    b = b + 10; //15
    return a + b; //25
}

int main(){

    // Pass by Value
    int a = 5, b = 5;
    cout << "Sum: " << sum(a, b) << endl;

    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
    return 0;
}