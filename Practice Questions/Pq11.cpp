#include <iostream>
using namespace std;

int main(){

    int sum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            sum+=i;
        }
    } 
    cout << "Sum of all numbers divisible by 3 is: " << sum;
    return 0;
}