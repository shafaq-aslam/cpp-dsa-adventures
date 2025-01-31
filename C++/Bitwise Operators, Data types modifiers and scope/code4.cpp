#include <iostream>
using namespace std;

int main(){

    // Operators Precedence
    cout << 5-2*6 << endl;

    // for override rules or precedence, include ()
    cout << (5-2)*6 << endl;

    // rule of associativity
    cout << 4*5%2 << endl; // L to R

    return 0;
}