#include<iostream>
using namespace std;

int main(){

    //It will take just single word
    string str1;
    cin >> str1;
    cout << "Hey " << str1 << "\n";

    //For whole string
    string str2;
    getline(cin, str2);
    cout << "Hey " << str2;
    return 0;
}