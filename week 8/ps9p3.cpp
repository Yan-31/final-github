#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeTuition(double credits) {
    const double RATE = 250.0;
    return credits * RATE;
}

int main() {
    string lastName;
    double credits;
    double totalTuition = 0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter last name and credits taken (Ctrl+Z to stop):\n";

    while (cin >> lastName >> credits) {
        double tuition = computeTuition(credits);
        cout << lastName << " - Credits: " << credits << " | Tuition: $" << tuition << endl;
        totalTuition += tuition;
        count++;
        cout << "Enter last name and credits taken (Ctrl+Z to stop):\n";
    }

    cout << "\nTotal Tuition: $" << totalTuition << endl;
    cout << "Number of Students: " << count << endl;

    return 0;
}
