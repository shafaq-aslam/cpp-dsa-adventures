#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int i = 1;
    while(i<=n){
        sum = sum+=i;
        i++;
    }
    cout << "Sum is: " << sum;
    return 0;
}