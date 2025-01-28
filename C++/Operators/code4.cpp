#include <iostream>
using namespace std;

int main(){

    cout << ((4>9) && (8>4)) << endl; // False
    cout << (('a' != 'A') && (8 == 8)) << endl; //True
    cout << (!(4>9) && (8>4)) << endl; // True
    cout << ((4>9) || (8>4)) << endl; // True
    cout << (('a' == 'A') || (8 == 8)) << endl; // Ture
    return 0;
}