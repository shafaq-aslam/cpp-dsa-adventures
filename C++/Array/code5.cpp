#include <iostream>
using namespace std;

int main(){

    int num[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int smallest = INT8_MAX; // + infinity

    // 1st way
    for(int i=0; i<size; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }

    // 2nd way
    for(int i=0; i<size; i++){ // min, max
       smallest = min(num[i], smallest);
    }
    cout << "Smallest integer is: " << smallest;

    return 0;
}