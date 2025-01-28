#include <iostream>
using namespace std;

int main(){
    
    int sum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        sum = sum+i; // sum+=i;
        cout << sum << endl;
    }
    return 0;
}