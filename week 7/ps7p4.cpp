#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computePay(char jobCode, double hours) {
    double rate;
    switch (jobCode) {
    case 'L': case 'l': rate = 25.0; break;
    case 'A': case 'a': rate = 30.0; break;
    case 'J': case 'j': rate = 50.0; break;
    default: rate = 0.0; break;
    }
    if (hours > 40)
        return 40 * rate + (hours - 40) * rate * 1.5;
    else
        return hours * rate;
}

int main() {
    string lastName;
    char jobCode;
    double hours, pay;
    double totalPay = 0.0;
    int count = 0;

    cout << "Enter employee last name, job code, hours worked (Ctrl+Z to stop):\n";

    while (cin >> lastName >> jobCode >> hours) {
        pay = computePay(jobCode, hours);
        cout << fixed << setprecision(2);
        cout << "Employee: " << lastName << ", Job: " << jobCode
            << ", Hours: " << hours << ", Pay: $" << pay << endl;
        totalPay += pay;
        count++;
    }

    double averagePay = (count > 0) ? totalPay / count : 0.0;
    cout << "\nTotal pay: $" << totalPay << ", Average pay: $" << averagePay
        << ", Number of employees: " << count << endl;
    return 0;
}
