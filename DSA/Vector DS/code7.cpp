#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector Functions
    // 1. size()  2. push_back()  3. pop_back()  4. front()  5. back()  
    // 6. at() 

    vector<int> vecInt;
    vecInt.push_back(28);
    vecInt.push_back(29);
    vecInt.push_back(30);
    vecInt.push_back(31);
    cout << "size of int vector = " << vecInt.size() << endl;
    cout << "The values in vector: " << endl;

    for(int nums : vecInt){
        cout << nums << endl;
    }

    // 4. front(): to pick front value from any vector
    cout << "\nFirst value of vector: " << vecInt.front() << endl;

    // 5. back(): to pick last value from any vector
    cout << "Last value of vector: " << vecInt.back() << endl;

    // 6. at(): to pick a value at perticular index of any vector
    cout << "vector value at index 1: " << vecInt.at(1) << endl;
    return 0;
}