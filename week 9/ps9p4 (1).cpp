#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getPayRate(char jobCode) {
    switch (toupper(jobCode)) {
    case 'L': return 25.0;
    case 'A': return 30.0;
    case 'J': return 50.0;
    default: return 0.0;
    }
}

double computeGrossPay(double hours, double rate) {
    if (hours <= 40)
        return hours * rate;
    else
        return (40 * rate) + ((hours - 40) * rate * 1.5);
}

int main() {
    string lastName;
    char jobCode;
    double hours;
    double totalGross = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code (L/A/J), and hours worked (Ctrl+Z to stop): ";

    while (cin >> lastName >> jobCode >> hours) {
        double rate = getPayRate(jobCode);
        double gross = computeGrossPay(hours, rate);

        cout << lastName << " - Gross Pay: $" << gross << endl;

        totalGross += gross;
        cout << "Enter last name, job code (L/A/J), and hours worked (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Gross Pay: $" << totalGross << endl;

    return 0;
}
