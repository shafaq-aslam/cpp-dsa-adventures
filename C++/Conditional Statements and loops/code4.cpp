#include <iostream>
using namespace std;

int main(){
    int num;
     cout << "Enter a number: ";
     cin >> num;

     if(num > 0){
        cout << "Nummber is Positive";
     } else if(num < 0){
        cout << "Number is Negative";
     } else {
        cout << "Number is Zero";
     }

    return 0;
}
