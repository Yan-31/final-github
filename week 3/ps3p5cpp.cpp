#include <iostream>
using namespace std;

int main() {
    double fixedCost, pricePerUnit, costPerUnit, breakEven;
    cout << "Enter fixed costs: ";
    cin >> fixedCost;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;
    cout << "Enter cost per unit: ";
    cin >> costPerUnit;

    breakEven = fixedCost / (pricePerUnit - costPerUnit);

    cout << "Break-even point (units): " << breakEven << endl;
    return 0;
}