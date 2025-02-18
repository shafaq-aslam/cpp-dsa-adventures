#include<iostream>
using namespace std;

int main(){

    int a = 25;
    int* ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;
    return 0;
}