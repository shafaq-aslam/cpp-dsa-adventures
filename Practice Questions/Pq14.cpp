#include <iostream>
using namespace std;

int callFact(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){ // n=5   
        fact*=i; // 1*2*3*4*5 = 120
    }
    return fact; // 120
}

int main(){
    // int val = callFact(6);
    // cout << "Factorial of N is: " << val << endl;

    cout << "Factorial of N is: " << callFact(6) << endl;
    cout << "Factorial of N is: " << callFact(5) << endl;
    cout << "Factorial of N is: " << callFact(7) << endl;

    return 0;
}