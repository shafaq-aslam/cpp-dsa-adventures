#include <iostream>
using namespace std;

int decTOBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum%2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main(){

    int decNum;
    cout << "Enter any decimal number: ";
    cin >> decNum;
    
    cout << "Binary number is: " << decTOBinary(decNum);
    return 0;
}