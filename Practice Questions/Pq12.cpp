#include <iostream>
using namespace std;

int main(){

    int n = 3;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout << "Factorial of 3 is: " << fact;
    return 0;
}