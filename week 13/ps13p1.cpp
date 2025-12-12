#include <iostream>
#include <string>
using namespace std;

// Function prototype
void displayAutos(const string makes[], const string models[], int size);

int main() {
    int n;

    cout << "Enter number of cars: ";
    cin >> n;
    cin.ignore(); // clear newline

    // Dynamically allocate arrays
    string* makes = new string[n];
    string* models = new string[n];

    // Input loop
    for (int i = 0; i < n; i++) {
        cout << "Enter make for car #" << i + 1 << ": ";
        getline(cin, makes[i]);
        cout << "Enter model for car #" << i + 1 << ": ";
        getline(cin, models[i]);
    }

    // Display arrays
    displayAutos(makes, models, n);

    // Free memory
    delete[] makes;
    delete[] models;

    return 0;
}

// Function to display autos
void displayAutos(const string makes[], const string models[], int size) {
    cout << "\nCar List:\n";
    for (int i = 0; i < size; i++) {
        cout << "Make: " << makes[i] << ", Model: " << models[i] << endl;
    }
}
