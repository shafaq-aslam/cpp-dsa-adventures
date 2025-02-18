#include<iostream>
using namespace std;

int main(){

    int a = 45;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;

    cout << "Address of a: " << ptr1 << endl;
    cout << "Address of pointer 1: " << ptr2 << endl;
    cout << "Address of pointer 2: " << &ptr2 << endl;
    return 0;
}
