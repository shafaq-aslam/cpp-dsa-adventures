#include <iostream>
using namespace std;

int a = 10; // global scope

int main(){

    //Scope -- local and global

    // Local scope
    if(3 > 1){

        // local variable
        int x = 10;
    }

    for(int i=1; i<10; i++){ // i variable has local scope

    }

    cout << x << endl; // error will occure

    // Global scope
    cout << a;

    return 0;
}