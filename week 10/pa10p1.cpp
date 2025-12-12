#include <iostream>
using namespace std;

void computeOrder(double quantity, double price, double& total, double& tax, double& totalOrder) {
    total = quantity * price;
    tax = total * 0.07;
    totalOrder = total + tax;
}

int main() {
    double quantity, price, total, tax, totalOrder;
    double sumTotal = 0, sumTax = 0;

    cout << "Enter quantity and price (Ctrl+Z to stop):\n";
    while (cin >> quantity >> price) {
        computeOrder(quantity, price, total, tax, totalOrder);
        cout << "Total: $" << total << ", Tax: $" << tax << ", Total Order: $" << totalOrder << endl;
        sumTotal += total;
        sumTax += tax;
    }
    cout << "\nSum of all totals: $" << sumTotal;
    cout << "\nSum of all taxes: $" << sumTax << endl;
    return 0;
}
