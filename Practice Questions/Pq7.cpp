#include <iostream>
using namespace std;

int main(){
    int evenSum = 0;
    int n;
    cout << "Enter any number: ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        if(i%2 == 0){
            evenSum = evenSum+i;
        }
    } cout << "Sum of all even numbers are: " << evenSum;
    return 0;
}