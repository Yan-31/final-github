#include <iostream>
#include <string>
using namespace std;

// Constants
const int SIZE = 10;

// Function prototypes
void readStudents(string firstNames[], string lastNames[], double gpas[]);
void displayStudents(const string firstNames[], const string lastNames[], const double gpas[]);
void displayStudentsReverse(const string firstNames[], const string lastNames[], const double gpas[]);

int main() {
    string firstNames[SIZE], lastNames[SIZE];
    double gpas[SIZE];

    // Read student data
    readStudents(firstNames, lastNames, gpas);

    // Display in normal order
    cout << "\nStudents in order:\n";
    displayStudents(firstNames, lastNames, gpas);

    // Display in reverse order
    cout << "\nStudents in reverse order:\n";
    displayStudentsReverse(firstNames, lastNames, gpas);

    return 0;
}

// Function definitions
void readStudents(string firstNames[], string lastNames[], double gpas[]) {
    cout << "Enter " << SIZE << " students (first last GPA):\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> firstNames[i] >> lastNames[i] >> gpas[i];
    }
}

void displayStudents(const string firstNames[], const string lastNames[], const double gpas[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << firstNames[i] << " " << lastNames[i] << " " << gpas[i] << endl;
    }
}

void displayStudentsReverse(const string firstNames[], const string lastNames[], const double gpas[]) {
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << firstNames[i] << " " << lastNames[i] << " " << gpas[i] << endl;
    }
}

