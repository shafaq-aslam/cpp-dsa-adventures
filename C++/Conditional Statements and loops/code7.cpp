#include <iostream>
using namespace std;

int main(){

    int count = 1;
    int n;
    cout << "Enter any number: ";
    cin >> n;


    while (count <= n)
    {
        cout << count << " ";
        count ++; 
    }

    return 0; 
}