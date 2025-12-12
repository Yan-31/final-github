#include <iostream>
#include <iomanip>
using namespace std;

void computeTuition(double creditHours, double financialAid, double& tuition, double& tuitionOwed) {
    tuition = creditHours * 250.0;
    tuitionOwed = tuition - financialAid;
}

int main() {
    string lastName;
    double creditHours, financialAid, tuition, tuitionOwed;
    double totalOwed = 0, count = 0;

    cout << "Enter last name, credit hours, and financial aid (Ctrl+Z to stop):\n";
    while (cin >> lastName >> creditHours >> financialAid) {
        computeTuition(creditHours, financialAid, tuition, tuitionOwed);
        cout << fixed << setprecision(2);
        cout << lastName << " - Tuition: $" << tuition << ", Tuition Owed: $" << tuitionOwed << endl;
        totalOwed += tuitionOwed;
        count++;
    }
    if (count > 0)
        cout << "\nTotal Tuition Owed: $" << totalOwed
        << "\nNumber of Students: " << count
        << "\nAverage Owed: $" << totalOwed / count << endl;
    return 0;
}
