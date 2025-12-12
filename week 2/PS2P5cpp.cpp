#include <iostream>
using namespace std;

int main() {
    double price, discountPercent, discountAmount, discountedPrice;

    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter discount percent (decimal form): ";
    cin >> discountPercent;

    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;

    cout << "Discount amount: $" << discountAmount << endl;
    cout << "Discounted price: $" << discountedPrice << endl;

    return 0;
}