#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double computeExtendedPrice(int quantity, double price) {
    return quantity * price;
}

int main() {
    ifstream inFile("grocery.txt");
    if (!inFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    string item;
    int quantity;
    double price, extended, total = 0.0;

    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Item" << setw(10) << "Qty"
        << setw(10) << "Price" << setw(15) << "Extended" << endl;

    while (inFile >> item >> quantity >> price) {
        extended = computeExtendedPrice(quantity, price);
        total += extended;

        cout << left << setw(15) << item << setw(10) << quantity
            << setw(10) << price << setw(15) << extended << endl;
    }

    double tax = total * 0.07;
    double totalReceipt = total + tax;

    cout << "\nSubtotal: " << total;
    cout << "\nTax (7%): " << tax;
    cout << "\nTotal: " << totalReceipt << endl;

    inFile.close();
    return 0;
}
