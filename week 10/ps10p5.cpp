#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void computeInvestment(double amount, double rate5, double rate10, double& fiveYearAmt, double& tenYearAmt) {
    fiveYearAmt = amount * pow(1 + rate5, 5);
    tenYearAmt = amount * pow(1 + rate10, 10);
}

int main() {
    double amount, rate5, rate10, fiveYearAmt, tenYearAmt;

    cout << "Enter investment amount, 5-year rate, and 10-year rate (Ctrl+Z to stop):\n";
    while (cin >> amount >> rate5 >> rate10) {
        computeInvestment(amount, rate5, rate10, fiveYearAmt, tenYearAmt);
        cout << fixed << setprecision(2);
        cout << "Investment: $" << amount
            << ", 5-Year Amount: $" << fiveYearAmt
            << ", 10-Year Amount: $" << tenYearAmt << endl;
    }
    return 0;
}
