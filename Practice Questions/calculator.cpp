#include <iostream>

int main(){
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "\nSum of num1 and num2 is: " << (num1+num2) << "\n";
    std::cout << "Product of num1 and num2 is: " << (num1*num2) << "\n";
    std::cout << "Difference of num1 and num2 is: " << (num1-num2) << "\n";
    std::cout << "Division of num1 and num2 is: " << (num1/num2) << "\n";
    std::cout << "Modulo of num1 and num2 is: " << (num1%num2) << "\n";
    return 0;
}