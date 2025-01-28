#include <iostream>
using namespace std;

int main(){

    cout << "Price is: " << (5+(double)5.698) << "\n\n"; 

    int price = (55*5);
    double newPrice = price;

    cout << "Old Price: " << price << "\nType of old price is: " << typeid(price).name() << "\n";
    cout << "New Price: " << newPrice << "\nType of new price is: " << typeid(newPrice).name();
    return 0;
}