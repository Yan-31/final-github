#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

double computeBiWeekly(double annualSalary) {
    return annualSalary / 26;
}

int main() {
    ifstream inFile("empl.txt");
    if (!inFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    string lastName;
    double annualSalary, biWeekly, totalSalary = 0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << left << setw(10) << "Last Name" << setw(15) << "Annual Salary" << setw(15) << "Bi-Weekly Pay" << endl;

    while (inFile >> lastName >> annualSalary) {
        biWeekly = computeBiWeekly(annualSalary);
        totalSalary += annualSalary;
        count++;

        cout << left << setw(10) << lastName << setw(15) << annualSalary << setw(15) << biWeekly << endl;
    }

    double avgSalary = totalSalary / count;
    cout << "\nTotal Annual Salary: " << totalSalary;
    cout << "\nNumber of Employees: " << count;
    cout << "\nAverage Salary: " << avgSalary << endl;

    inFile.close();
    return 0;
}
