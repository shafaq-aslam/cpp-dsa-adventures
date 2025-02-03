#include <iostream>
#include <vector>
using namespace std;

int main(){

    // 1st way to create vector
    vector<int> vec;
    cout << vec[0];

    // 2nd way to create vector
    vector<int> vec = {1, 2, 3};
    cout << vec[0];

    //3rd way
    vector<int> vec (3, 2);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    
    return 0;
}