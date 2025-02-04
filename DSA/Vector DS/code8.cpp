#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec;

    vec.push_back(2); 
    cout << "Size of vector = " << vec.size() << "\nCapacity of vector = " << vec.capacity();
    vec.push_back(5);
    vec.push_back(7);
    cout << "\nSize of vector = " << vec.size() << "\nCapacity of vector = " << vec.capacity();
    vec.push_back(15);
    cout << "\nSize of vector = " << vec.size() << "\nCapacity of vector = " << vec.capacity();
    vec.push_back(12);
    vec.push_back(52);
    cout << "\nSize of vector = " << vec.size() << "\nCapacity of vector = " << vec.capacity();
    return 0;
}