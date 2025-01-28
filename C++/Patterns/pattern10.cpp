#include <iostream>
using namespace std;

int main(){

    int n; //3
    cout << "Enter any number: ";
    cin >> n;

    for(int i=0; i<n; i++){ //i=0,1,2,3       n=3
        for(int j=i+1; j>0; j-- ){ //j=1, 2,1 3,2,1      num=1,2,3,4
            cout << j << " "; //1 2,1 3,2,1
        }
        cout << endl;
    } 
    return 0;
}