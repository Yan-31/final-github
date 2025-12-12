#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getRate(char districtCode) {
    switch (toupper(districtCode)) {
    case 'I': return 250.0;
    case 'O': return 550.0;
    default: return 0.0;
    }
}

double computeTuition(double hours, double rate) {
    return hours * rate;
}

int main() {
    string lastName;
    char districtCode;
    double hours;
    double totalTuition = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name, credit hours, and district code (Ctrl+Z to stop): ";

    while (cin >> lastName >> hours >> districtCode) {
        double rate = getRate(districtCode);
        double tuition = computeTuition(hours, rate);

        cout << lastName << " - Tuition: $" << tuition << endl;

        totalTuition += tuition;
        cout << "Enter last name, credit hours, and district code (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Tuition: $" << totalTuition << endl;

    return 0;
}
