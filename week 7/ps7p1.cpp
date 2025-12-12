#include <iostream>
#include <iomanip>
using namespace std;

// Function to compute extended price and discount
void computePrice(int quantity, double price, double& extended, double& discounted) {
    extended = quantity * price;
    double discount = (quantity > 1000) ? 0.10 * extended : 0.0;
    discounted = extended - discount;
    cout << fixed << setprecision(2);
    cout << "Quantity: " << quantity << ", Price: $" << price
        << ", Extended: $" << extended
        << ", Discount: $" << discount
        << ", Discounted Price: $" << discounted << endl;
}

int main() {
    int quantity;
    double price;
    double extended, discounted;
    double totalDiscounted = 0.0;

    cout << "Enter quantity and price (Ctrl+Z to stop):\n";

    while (cin >> quantity >> price) {
        computePrice(quantity, price, extended, discounted);
        totalDiscounted += discounted;
    }

    cout << "\nTotal of all discounted prices: $" << fixed << setprecision(2) << totalDiscounted << endl;
    return 0;
}

