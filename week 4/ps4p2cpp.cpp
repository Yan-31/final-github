#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char item;
    int qty;
    double price, extPrice;

    cout << "Enter item (A/B): ";
    cin >> item;
    cout << "Enter quantity: ";
    cin >> qty;

    if (item == 'A' || item == 'a')
        price = 10;
    else
        price = 20;

    extPrice = qty * price;

    cout << fixed << setprecision(2);
    cout << "Item: " << item << endl;
    cout << "Unit Price: $" << price << endl;
    cout << "Extended Price: $" << extPrice << endl;

    return 0;
}