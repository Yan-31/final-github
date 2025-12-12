#include <iostream>
using namespace std;

int main() {
    int part, quantity;
    double cost, total;

    cout << "Enter part number (10, 99, 55, 70, 50): ";
    cin >> part;
    cout << "Enter quantity: ";
    cin >> quantity;

    if (part == 10 && quantity > 1000)
        cost = 1.00;
    else if (part == 99 && quantity > 500)
        cost = 2.00;
    else
        cost = 5.00;

    total = quantity * cost;

    cout << "Part: " << part << endl;
    cout << "Cost per unit: $" << cost << endl;
    cout << "Total: $" << total << endl;
    return 0;
}
