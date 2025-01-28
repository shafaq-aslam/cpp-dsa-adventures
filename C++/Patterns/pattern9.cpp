#include <iostream>
using namespace std;

int main()
{
    int n; // 3
    cout << "Enter any number: ";
    cin >> n;

    for (int i = 0; i < n; i++){ // i= 0,1,2,3
        for (int j = 0; j < i + 1; j++){ // j= 0,1  0,1,2  0,1,2,3      i=1,2,3
            cout << j + 1 << " "; // j=1  1,2  1,2,3
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j <= i + 1; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}