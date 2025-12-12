#include <iostream>
using namespace std;

int main() {
    int quantity;
    char status;
    double price, extended, tax, total;

    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter status (A, B, C, D): ";
    cin >> status;

    if (quantity > 10000 && (status == 'A' || status == 'a'))
        price = 10;
    else if (quantity > 10000 && (status == 'B' || status == 'b'))
        price = 12;
    else if (quantity >= 5000 && quantity <= 10000 && (status == 'C' || status == 'c'))
        price = 20;
    else if (quantity >= 5000 && quantity <= 10000 && (status == 'D' || status == 'd'))
        price = 22;
    else
        price = 30;

    extended = quantity * price;
    tax = extended * 0.07;
    total = extended + tax;

    cout << "Extended Price: $" << extended << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;
    return 0;
}
