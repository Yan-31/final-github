#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Employee structure
struct Employee {
    string firstName;
    string lastName;
    double hours;
    double rate;
    double grossPay;
};

// Function prototype
double computeGrossPay(double hours, double rate);
void displayEmployees(const vector<Employee>& employees);

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee #" << i + 1 << endl;
        cout << "First name: ";
        cin >> employees[i].firstName;
        cout << "Last name: ";
        cin >> employees[i].lastName;
        cout << "Hours worked: ";
        cin >> employees[i].hours;
        cout << "Hourly rate: ";
        cin >> employees[i].rate;

        employees[i].grossPay = computeGrossPay(employees[i].hours, employees[i].rate);
    }

    displayEmployees(employees);

    return 0;
}

// Function to compute gross pay
double computeGrossPay(double hours, double rate) {
    if (hours <= 40)
        return hours * rate;
    else
        return 40 * rate + (hours - 40) * rate * 1.5;
}

// Function to display employees
void displayEmployees(const vector<Employee>& employees) {
    cout << "\nEmployee Payroll:\n";
    for (const auto& emp : employees) {
        cout << emp.firstName << " " << emp.lastName
            << ", Hours: " << emp.hours
            << ", Rate: " << emp.rate
            << ", Gross Pay: " << emp.grossPay << endl;
    }
}
