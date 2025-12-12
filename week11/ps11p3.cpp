#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double computeMPG(double miles, double gallons) {
    return miles / gallons;
}

int main() {
    ifstream inFile("trips.txt");
    if (!inFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    double miles, gallons, mpg, totalMiles = 0, totalGallons = 0;

    cout << fixed << setprecision(2);
    cout << left << setw(10) << "Gallons" << setw(10) << "Miles" << setw(10) << "MPG" << endl;

    while (inFile >> gallons >> miles) {
        mpg = computeMPG(miles, gallons);
        totalMiles += miles;
        totalGallons += gallons;

        cout << left << setw(10) << gallons << setw(10) << miles << setw(10) << mpg << endl;
    }

    cout << "\nTotal Miles: " << totalMiles;
    cout << "\nTotal Gallons: " << totalGallons << endl;

    inFile.close();
    return 0;
}
