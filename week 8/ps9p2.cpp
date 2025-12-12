#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computePay(char jobCode, double hours) {
    double rate;
    switch (toupper(jobCode)) {
    case 'L': rate = 25.0; break;
    case 'A': rate = 30.0; break;
    case 'J': rate = 50.0; break;
    default: rate = 0.0;
    }

    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main() {
    string lastName;
    char jobCode;
    double hours, pay;
    double totalPay = 0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, job code (L/A/J), and hours (Ctrl+Z to stop):\n";

    while (cin >> lastName >> jobCode >> hours) {
        pay = computePay(jobCode, hours);
        cout << lastName << " - Pay: $" << pay << endl;
        totalPay += pay;
        count++;

        cout << "Enter last name, job code (L/A/J), and hours (Ctrl+Z to stop):\n";
    }

    if (count > 0)
        cout << "\nAverage Pay: $" << totalPay / count << endl;

    cout << "Number of Entries: " << count << endl;

    return 0;
}

