#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeMPG(double miles, double gallons) {
    if (gallons == 0) return 0;
    return miles / gallons;
}

double computeGasCost(double gallons) {
    const double PRICE_PER_GALLON = 3.50;
    return gallons * PRICE_PER_GALLON;
}

int main() {
    string city;
    double miles, gallons;
    double totalCost = 0;

    cout << fixed << setprecision(2);
    cout << "Enter destination, miles, and gallons (Ctrl+Z to stop): ";

    while (cin >> city >> miles >> gallons) {
        double mpg = computeMPG(miles, gallons);
        double cost = computeGasCost(gallons);

        cout << city << " - MPG: " << mpg << " | Gas Cost: $" << cost << endl;

        totalCost += cost;
        cout << "Enter destination, miles, and gallons (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Gas Cost: $" << totalCost << endl;

    return 0;
}
