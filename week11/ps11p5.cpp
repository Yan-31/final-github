#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void computeTuition(char studentCode, double credits, double& tuition, double& fees, double& costPerCredit) {
    if (studentCode == 'I')
        costPerCredit = 250.0;
    else
        costPerCredit = 500.0;

    tuition = credits * costPerCredit;
    fees = tuition * 0.10;
}

int main() {
    ifstream inFile("student.txt");
    if (!inFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    string lastName;
    char studentCode;
    double credits, tuition, fees, costPerCredit, totalTuition = 0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Last Name" << setw(8) << "Code"
        << setw(10) << "Credits" << setw(12) << "Cost/Credit"
        << setw(12) << "Tuition" << setw(10) << "Fees" << endl;

    while (inFile >> lastName >> studentCode >> credits) {
        computeTuition(studentCode, credits, tuition, fees, costPerCredit);
        totalTuition += tuition;
        count++;

        cout << left << setw(12) << lastName << setw(8) << studentCode
            << setw(10) << credits << setw(12) << costPerCredit
            << setw(12) << tuition << setw(10) << fees << endl;
    }

    double avgTuition = totalTuition / count;

    cout << "\nTotal Tuition: " << totalTuition;
    cout << "\nNumber of Students: " << count;
    cout << "\nAverage Tuition: " << avgTuition << endl;

    inFile.close();
    return 0;
}
