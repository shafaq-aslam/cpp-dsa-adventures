#include <iostream>
using namespace std;

int main()
{

    // Conversion --- Implicit conversion --- move from Small to Big
    // char grade = 'A';
    // int value = grade;
    // cout << "Grade: " << grade << "\n" << "Value of A is: " << value << endl;
    // cout << "First, I was CHAR TYPE container " << "then someone change me implicitly in INT TYPE container" << endl;
    
    // Type Casting --- Explicit conversion --- move from Big to Small
    double price = 653.85;
    int newPrice = (int)price;
    cout << "Old Price: " << price << "\nNew Price: " << newPrice << endl;    
    return 0;
}