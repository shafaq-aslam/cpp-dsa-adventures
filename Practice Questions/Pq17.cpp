#include <iostream>
using namespace std;

//Factorial
int fact(int x){
    int f = 1;
    for(int i=1; i<=x; i++){
        f = f*i;
    }
    return f;
}

//Binomial Coefficient
int nCr(int n, int r){
    int factOfN = fact(n);
    int factOfR = fact(r);
    int factOfNMR = fact(n-r);

    return factOfN / (factOfR * factOfNMR);
}


int main(){
    
    int n, r;
    // int nCr;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    cout << "Binomial Coefficient for n & r: " << nCr(n, r);

    //binomial coefficient
    // nCr = (fact(n)/(fact(r)*fact(n-r)));
    // cout << "Binomial Coefficient for n & r: " << nCr;

    return 0;
}