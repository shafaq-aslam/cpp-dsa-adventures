#include <iostream>
using namespace std;

int main(){

    int marks[5] = {80, 96, 70, 55, 65}; 

    // 1st way
    // for(int i=0; i<5; i++){
    //     cout <<  marks[i] << endl;
    // }

    // 2nd way
    int size = 5;
    for(int i=0; i<size; i++){
        cout <<  marks[i] << endl;
    }

    return 0;
}