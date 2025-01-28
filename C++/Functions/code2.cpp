#include <iostream>
using namespace std;

// function definition
// sum of 2 numbers
int sum(int a, int b){
     int s = a+b;
     return s;
}

int main(){

    // function call / invoke
    cout << sum(5, 6) << endl;
    cout << sum(10, 5);
    return 0;
}