#include <iostream>
using namespace std;

int mult(int x){
    x = 2*x;
    cout << "x: " << x << endl;
}

int main(){

    int x = 5;
    mult(x);
    cout << "x: " << x;
    return 0;
}