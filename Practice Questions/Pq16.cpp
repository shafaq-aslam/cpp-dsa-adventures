#include <iostream>
using namespace std;

int sumOfDigits(int num){

    int digitSum = 0;

    while(num > 0){
        int lastDigit = num%10;
        num = num/10;
        digitSum+=lastDigit;
    }
    cout << "Sum of Digits: " << digitSum;
}


int main(){
    int n;
    cout << "Enter any number: ";
    cin >> n;

    sumOfDigits(n);
    return 0;
}