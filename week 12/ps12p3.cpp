#include <iostream>
#include <string>
using namespace std;

// Constants
const int SIZE = 10;

// Function prototypes
void readEmployees(string firstNames[], string lastNames[], double salaries[]);
void displayEmployees(const string firstNames[], const string lastNames[], const double salaries[]);
int searchEmployee(const string lastNames[], int size, const string lastName);

int main() {
    string firstNames[SIZE], lastNames[SIZE];
    double salaries[SIZE];

    readEmployees(firstNames, lastNames, salaries);
    displayEmployees(firstNames, lastNames, salaries);

    string searchName;
    cout << "\nEnter last name to search, Ctrl+Z to stop:\n";
    while (cin >> searchName) {
        int index = searchEmployee(lastNames, SIZE, searchName);
        if (index != -1) {
            cout << firstNames[index] << " " << lastNames[index] << " " << salaries[index] << endl;
        }
        else {
            cout << searchName << " not found\n";
        }
        cout << "Enter last name to search, Ctrl+Z to stop:\n";
    }

    return 0;
}

// Function definitions
void readEmployees(string firstNames[], string lastNames[], double salaries[]) {
    cout << "Enter employee data (first last salary):\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> firstNames[i] >> lastNames[i] >> salaries[i];
    }
}

void displayEmployees(const string firstNames[], const string lastNames[], const double salaries[]) {
    cout << "\nEmployee Data:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << firstNames[i] << " " << lastNames[i] << " " << salaries[i] << endl;
    }
}

int searchEmployee(const string lastNames[], int size, const string lastName) {
    for (int i = 0; i < size; i++) {
        if (lastNames[i] == lastName)
            return i;
    }
    return -1; // Not found
}
