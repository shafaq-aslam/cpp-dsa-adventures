#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter any number: ";
    cin >> num;

    bool isPrime = true;

    for(int i = 2; i<=num-1; i++){ // i<=num-1 ---> i*i<=n // better approach
        if(num%i == 0){
            isPrime = false;
            break;
        } 
    }

    if(isPrime == true){
        cout << "Number is Prime";
    } else {
        cout << "Number is Non Prime";
    }

    return 0;
}