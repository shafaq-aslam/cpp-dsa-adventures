#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

int main(){

    int size = 7;
    int arr[size] = {4, 2, 7, 8, 1, 2, 5};
    int target = 5;
    
    int indValue = linearSearch(arr, size, target);
    cout << "Index number is: " << indValue << endl;
    return 0;
}