#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string last;
    int dependents;
    double gross, adjGross, rate, tax;

    cout << "Enter last name: ";
    cin >> last;
    cout << "Enter number of dependents: ";
    cin >> dependents;
    cout << "Enter gross income: ";
    cin >> gross;

    adjGross = gross - (dependents * 12000);

    if (adjGross > 50000)
        rate = 0.20;
    else
        rate = 0.10;

    tax = adjGross * rate;

    if (tax < 0)
        tax = 100;

    cout << fixed << setprecision(2);
    cout << "Last Name: " << last << endl;
    cout << "Gross Income: $" << gross << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Adjusted Gross: $" << adjGross << endl;
    cout << "Income Tax: $" << tax << endl;

    return 0;
}
