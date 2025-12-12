#include <iostream>
#include <iomanip>
using namespace std;

double getUnitPrice(char code) {
    switch (toupper(code)) {
    case 'W': return 10.0;
    case 'C': return 15.0;
    case 'G': return 20.0;
    default: return 0.0;
    }
}

double getShipping(char code) {
    switch (toupper(code)) {
    case 'W': return 2.0;
    case 'C': return 5.0;
    case 'G': return 7.0;
    default: return 0.0;
    }
}

int main() {
    char code;
    int quantity;
    double totalAll = 0;

    cout << fixed << setprecision(2);
    cout << "Enter product code (W/C/G) and quantity (Ctrl+Z to stop):\n";

    while (cin >> code >> quantity) {
        double unitPrice = getUnitPrice(code);
        double shipping = getShipping(code);
        double extended = quantity * unitPrice;
        double total = extended + shipping;

        cout << "Code: " << code
            << " | Unit Price: $" << unitPrice
            << " | Shipping: $" << shipping
            << " | Extended: $" << extended
            << " | Total: $" << total << endl;

        totalAll += total;

        cout << "Enter product code (W/C/G) and quantity (Ctrl+Z to stop):\n";
    }

    cout << "\nTotal of All Orders: $" << totalAll << endl;
    return 0;
}

