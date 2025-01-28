#include <iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "Character is in Lowercase";

    } else if(ch >= 'A' && ch <= 'Z'){
        cout << "Character is in Uppercase";
    } else {
        cout << "Invalid input";
    }

    // if(ch >= 97 && ch <= 122){
    //     cout << "Character is in Lowercase";

    // } else if(ch >= 65 && ch <= 90){
    //     cout << "Character is in Uppercase";
    // } else {
    //     cout << "Invalid input";
    // }

    return 0;
}