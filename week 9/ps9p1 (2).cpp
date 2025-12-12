#include <iostream>
#include <iomanip>
using namespace std;

double computeTotal(double quantity, double price) {
    return quantity * price;
}

double computeDiscount(double total) {
    double discountRate = (total > 10000) ? 0.10 : 0.05;
    double discountAmount = total * discountRate;
    return total - discountAmount;
}

int main() {
    double quantity, price;
    double total = 0, discountedTotal = 0;

    cout << fixed << setprecision(2);

    cout << "Enter quantity and price (Ctrl+Z to stop): ";
    while (cin >> quantity >> price) {
        double itemTotal = computeTotal(quantity, price);
        double itemDiscounted = computeDiscount(itemTotal);

        cout << "Total: $" << itemTotal << " | Discounted Total: $" << itemDiscounted << endl;

        total += itemTotal;
        discountedTotal += itemDiscounted;

        cout << "Enter quantity and price (Ctrl+Z to stop): ";
    }

    cout << "\nSum of Totals: $" << total << endl;
    cout << "Sum of Discounted Totals: $" << discountedTotal << endl;

    return 0;
}
