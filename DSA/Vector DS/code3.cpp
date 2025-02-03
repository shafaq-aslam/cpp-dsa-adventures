#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<char> vec = {'a', 'b', 'c', 'd', 'f'};

    for(char ch : vec){
        cout << ch << " ";
    }
    return 0;
}