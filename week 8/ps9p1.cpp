#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

double computeMPG(double miles, double gallons) {
    if (gallons == 0) return 0;
    return miles / gallons;
}

int main() {
    string city;
    double miles = 0, gallons = 0;
    double totalMiles = 0;
    int tripCount = 0;

    cout << fixed << setprecision(2);

    cout << "Enter destination, miles, and gallons used (Ctrl+Z to stop):\n";
    while (cin >> city >> miles >> gallons) {
        double mpg = computeMPG(miles, gallons);
        cout << city << " - Miles per Gallon: " << mpg << endl;

        totalMiles += miles;
        tripCount++;

        cout << "Enter destination, miles, and gallons used (Ctrl+Z to stop):\n";
    }

    cout << "\nTotal Miles Travelled: " << totalMiles << endl;
    cout << "Total Trips Made: " << tripCount << endl;

    return 0;
}

