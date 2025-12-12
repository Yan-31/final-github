#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qty;
    double price, extPrice, taxAmt, totalAmt;

    cout << "Enter quantity: ";
    cin >> qty;

    if (qty >= 1000)
        price = 3.0;
    else
        price = 5.0;

    extPrice = qty * price;
    taxAmt = extPrice * 0.07;
    totalAmt = extPrice + taxAmt;

    cout << fixed << setprecision(2);
    cout << "Quantity: " << qty << endl;
    cout << "Unit Price: $" << price << endl;
    cout << "Extended Price: $" << extPrice << endl;
    cout << "Tax: $" << taxAmt << endl;
    cout << "Total: $" << totalAmt << endl;

    return 0;
}

