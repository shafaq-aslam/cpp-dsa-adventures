#include <iostream>
using namespace std;

int main(){
    //Find index number of smallest/largest value in an Array

    int size = 7;
    int arr[size] = {2, 6, -15, 52, -22, 0, -1};
    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    int smallInd, largeInd;

    for(int i=0; i<size; i++){

        // Smallest
        if(arr[i] < smallest){
            smallest = arr[i];
            smallInd = i;
        }

        // Largest
        if(arr[i] > largest){
            largest = arr[i];
            largeInd = i;
        } 
    }

    cout << "Smallest integer is: " << smallest << endl;
    cout << "Index of smallest integer is: " << smallInd << endl;
    cout << "Largest integer is: " << largest << endl;
    cout << "Index of largest integer is: " << largeInd;
    
    return 0;
}