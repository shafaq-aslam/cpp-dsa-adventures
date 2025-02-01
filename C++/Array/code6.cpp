#include <iostream>
using namespace std;

int main(){

    int num[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int largest = INT8_MIN; // - infinity

    // 1st way
    for(int i=0; i<size; i++){
        if(num[i] > largest){
            largest = num[i];
        }
    }

    // 2nd way
    for(int i=0; i<size; i++){ // min, max
       largest = max(num[i], largest);
    }
    cout << "largest integer is: " << largest;

    return 0;
}