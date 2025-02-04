#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector Functions
    // 1. size()  2. push_back()  3. pop_back()  4. front()  5. back()  
    // 6. at() 

    // 3. pop_back(): to pop(delete) value from any vector

    vector<int> vecInt;
    vecInt.push_back(28);
    vecInt.push_back(29);
    vecInt.push_back(30);
    vecInt.push_back(31);
    cout << "size of int vector = " << vecInt.size() << endl;
    cout << "Before pop_back the values in vector: " << endl;

    for(int nums : vecInt){
        cout << nums << endl;
    }

    vecInt.pop_back();
    cout << "\nsize of int vector = " << vecInt.size() << endl;
    cout << "After pop_back the values in vector: " << endl;

    for(int nums : vecInt){
        cout << nums << endl;
    }

    return 0;
}