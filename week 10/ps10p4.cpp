#include <iostream>
#include <iomanip>
using namespace std;

void computeWidgets(int widgets, double& costPerWidget, double& extendedPrice, double& salesTax, double& totalOrder) {
    if (widgets >= 10000)
        costPerWidget = 4.00;
    else if (widgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;

    extendedPrice = widgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main() {
    int widgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder;
    double grandTotal = 0;

    cout << "Enter number of widgets (Ctrl+Z to stop):\n";
    while (cin >> widgets) {
        computeWidgets(widgets, costPerWidget, extendedPrice, salesTax, totalOrder);
        cout << fixed << setprecision(2);
        cout << "Widgets: " << widgets << ", Cost Each: $" << costPerWidget
            << ", Extended: $" << extendedPrice << ", Tax: $" << salesTax
            << ", Total: $" << totalOrder << endl;
        grandTotal += totalOrder;
    }
    cout << "\nGrand Total of All Orders: $" << grandTotal << endl;
    return 0;
}
