#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void computeAuto(double MSRP, double& salesPrice, double& salesTax, double& savings) {
    savings = MSRP - salesPrice;
    salesTax = salesPrice * 0.07;
}

int main() {
    ifstream inFile("auto.txt");
    if (!inFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    string make, model;
    double MSRP, salesPrice, salesTax, savings, totalSavings = 0.0;

    cout << fixed << setprecision(2);
    cout << left << setw(10) <<
