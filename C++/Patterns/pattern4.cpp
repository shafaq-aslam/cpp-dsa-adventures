#include <iostream>
using namespace std;

int main(){

    int num = 1;
    
    int n;
    cout << "Enter any number: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ 
            cout << num << " ";
            num+=1;
        }
        cout << endl;
    }
    return 0;
}