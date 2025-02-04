#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector Functions
    // 1. size()  2. push_back()  3. pop_back()  4. front()  5. back()  
    // 6. at() 

    // 1. size() to find size of any vector
    vector<int> vec1;
    cout << "Size = " << vec1.size() << endl; 

    vector<char> vecCh = {'a', 'b', 'c'};
    cout << "Size char vector = " << vecCh.size() << endl;

    // 2. push_back() to push(add) value at the end in vector
    vector<int> vec2;
    vec2.push_back(25);
    cout << "size of int vector = " << vec2.size() << endl;

    vector<int> vecInt;
    vecInt.push_back(28);
    vecInt.push_back(29);
    vecInt.push_back(30);
    vecInt.push_back(31);
    cout << "size of int vector = " << vecInt.size() << endl;

    for(int nums : vecInt){
        cout << nums << endl;
    }

    return 0;
}