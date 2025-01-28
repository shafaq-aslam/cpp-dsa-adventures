#include <iostream>
using namespace std;

// function definition
// sum of 2 numbers
int minOfTwo(int a, int b){
     if(a<b){
        return a;
     } else {
        return b;
     }
}

double avgOfTwo(double a, double b){
    double avg = (a+b)/2;
    return avg;
}

int main(){

    // function call / invoke
    cout << "Min = " << minOfTwo(15, 10) << endl; // 5 and 10 are arguments
    cout << "Average = " << avgOfTwo(4, 13);
    return 0;
}