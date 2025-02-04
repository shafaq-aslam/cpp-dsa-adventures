#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector Functions
    // 1. size  2. push_back  3. pop_back  4. front  5. back  6. at 

    // to find size of any vector
    vector<int> vec1;
    cout << "Size = " << vec1.size() << endl; 

    vector<char> vecCh = {'a', 'b', 'c'};
    cout << "Size char vector = " << vecCh.size() << endl;

    // to push value at the end in vector
    vector<int> vec2;
    vec2.push_back(25);
    cout << "size of int vector = " << vec2.size() << endl;
    return 0;
}