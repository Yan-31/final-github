#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeTuition(char districtCode, int credits) {
    double rate = (districtCode == 'I' || districtCode == 'i') ? 250.0 : 550.0;
    return credits * rate;
}

int main() {
    string lastName;
    char districtCode;
    int credits;
    double tuition;
    double totalTuition = 0.0;
    int totalCredits = 0;
    int studentCount = 0;

    cout << "Enter student last name, credit hours, district code (Ctrl+Z to stop):\n";

    while (cin >> lastName >> credits >> districtCode) {
        tuition = computeTuition(districtCode, credits);
        cout << fixed << setprecision(2);
        cout << "Student: " << lastName << ", Tuition: $" << tuition << endl;
        totalTuition += tuition;
        totalCredits += credits;
        studentCount++;
    }

    cout << "\nTotal tuition: $" << totalTuition
        << ", Total credits: " << totalCredits
        << ", Number of students: " << studentCount << endl;

    return 0;
}
