#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<char> vec (5, 0);

    for(char &ch : vec){
        cin >> ch;
    }

    cout << "\n"; 
    
    for(char ch : vec){
        cout << ch << endl;
    }
    return 0;
}