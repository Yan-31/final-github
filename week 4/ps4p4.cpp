#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double cost, warranty, total;

    cout << "Enter appliance name: ";
    cin >> name;
    cout << "Enter cost: ";
    cin >> cost;

    if (cost > 1000)
        warranty = cost * 0.10;
    else
        warranty = cost * 0.05;

    total = cost + warranty;

    cout << fixed << setprecision(2);
    cout << "Appliance: " << name << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Warranty: $" << warranty << endl;
    cout << "Total: $" << total << endl;

    return 0;
}

