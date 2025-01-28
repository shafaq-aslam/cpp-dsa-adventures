#include <iostream>
using namespace std;

int main(){

    char ch = 'A'; // B, C
    int n; // 3
    cout << "Enter any number: ";
    cin >> n;

    for(int i=0; i<n; i++){ //0 1 2 3
        for(int j=0; j<i+1; j++){ //j --0, 1, 0, 1, 2, 0, 1, 2, 3     i -- 1, 2, 3    
            cout << ch << " "; // A, B, B, C, C, C  
        }
        ch+=1; // B, C, D
        cout << endl;
    }

    return 0;
}