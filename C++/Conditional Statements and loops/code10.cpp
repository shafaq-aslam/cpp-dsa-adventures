#include <iostream>
using namespace std;

int main(){

    int m;
    cout << "How many stars do you want to print in every line: ";
    cin >> m;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=m; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}