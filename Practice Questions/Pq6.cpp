#include <iostream>
using namespace std;

int main(){
    int oddSum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        if(i%2 != 0){
            oddSum = oddSum+i;
        }
    } cout << "Sum of all odd numbers are: " << oddSum;
    return 0;
}