#include <iostream>
using namespace std;

int main(){

    char ch = 'A';
    int n=3;
    cout << "Enter any number: ";
    cin >> n;

    for(int i=0; i<n; i++){ 
        for(int j=0; j<i+1; j++){     
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}