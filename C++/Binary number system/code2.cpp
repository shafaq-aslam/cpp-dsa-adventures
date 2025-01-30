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

    for(int i=1; i<=10; i++){
        cout << decTOBinary(i) << endl;
    }
    return 0;
}