#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        
        //numbers set1
        for(int j=1; j<=i+1; j++){
            cout << j;
        }

        //numbers set1
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}