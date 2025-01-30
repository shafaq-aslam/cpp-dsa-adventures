#include <iostream>
using namespace std;

int binTODecimal(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum%10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main(){

    int binNum;
    cout << "Enter any binary number: ";
    cin >> binNum;
    
    cout << "Decimal number is: " << binTODecimal(binNum);
    return 0;
}