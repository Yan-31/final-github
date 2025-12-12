#include <iostream>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hours, rate, totalPay;

    cout << "Enter employee last name: ";
    cin >> lastName;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter job code (E, J, A): ";
    cin >> jobCode;

    if (jobCode == 'E' || jobCode == 'e')
        rate = 25.00;
    else if (jobCode == 'J' || jobCode == 'j')
        rate = 20.00;
    else if (jobCode == 'A' || jobCode == 'a')
        rate = 15.00;
    else {
        cout << "Invalid job code entered." << endl;
        return 0;
    }

    totalPay = hours * rate;

    cout << "Employee: " << lastName << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Pay Rate: $" << rate << endl;
    cout << "Total Pay: $" << totalPay << endl;
    return 0;
}