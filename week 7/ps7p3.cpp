#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string city;
    double miles, gallons;
    double totalMiles = 0.0;
    int tripCount = 0;

    cout << "Enter destination city, miles travelled, gallons used (Ctrl+Z to stop):\n";

    while (cin >> city >> miles >> gallons) {
        double mpg = (gallons != 0) ? miles / gallons : 0.0;
        cout << fixed << setprecision(2);
        cout << "City: " << city << ", MPG: " << mpg << endl;
        totalMiles += miles;
        tripCount++;
    }

    cout << "\nTotal miles travelled: " << totalMiles << endl;
    cout << "Number of trips: " << tripCount << endl;
    return 0;
}
