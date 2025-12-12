#include <iostream>
using namespace std;

int main() {
    double salary, taxRate, taxAmount;

    cout << "Enter annual salary: ";
    cin >> salary;

    if (salary > 100000)
        taxRate = 0.40;
    else if (salary >= 50000)
        taxRate = 0.35;
    else
        taxRate = 0.25;

    taxAmount = salary * taxRate;

    cout << "Salary: $" << salary << endl;
    cout << "Tax Rate: " << taxRate * 100 << "%" << endl;
    cout << "Tax Amount Owed: $" << taxAmount << endl;
    return 0;
}
