#include <iostream>
using namespace std;

int main(){

    // int marks[] = {36, 56, 100}
    int marks[5] = {80, 96, 70, 55, 65}; 
         // index   0   1   2   3   4
    // to find size of array
    cout << sizeof(marks) << endl; // will display 20 which is the byte.
    cout << sizeof(marks) / sizeof(int) << endl; // will display the size of array
   
    return 0;
}