#include <iostream>
using namespace std;

// function definition

int printHello(){
     cout << "Hello world" << endl;
     return 0;
}

int main(){

    // function call / invoke
    int val = printHello();
    cout << val << endl;

    // cout << printHello() << endl;
    return 0;
}