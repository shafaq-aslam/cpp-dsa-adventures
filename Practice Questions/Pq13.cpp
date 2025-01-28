#include <iostream>
using namespace std;

void sumOfNumbers(int n){
    int sum = 0;

    for(int i=1; i<=n; i++){ 
        sum+=i; //1+2+3+4 = 10
    }
    cout << "Sum of numbers are: " << sum;
}

// int sumOfNumbers(int n){
//     int sum = 0;

//     for(int i=1; i<=n; i++){ 
//         sum+=i; //1+2+3+4 = 10
//     }
//     return sum;
// }



int main(){

    sumOfNumbers(5);
    return 0;
}