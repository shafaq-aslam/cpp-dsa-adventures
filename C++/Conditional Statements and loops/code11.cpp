#include <iostream>
using namespace std;

int main(){

    int m, n;

    cout << "How many lines of stars do you want: ";
    cin >> m;

    cout << "How many stars do you want to print in every line: ";
    cin >> n;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}