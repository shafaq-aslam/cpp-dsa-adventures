#include <iostream>
using namespace std;

int main(){

    // int marks[] = {36, 56, 100}
    int marks[5] = {80, 96, 70, 55, 65}; 
         // index   0   1   2   3   4

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    //0 to size-1
    cout << marks[5] << endl; // will throw error or some garbage value
    return 0;
}