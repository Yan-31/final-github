#include <iostream>
#include <string>
using namespace std;

// Constants
const int SIZE = 8;

// Function prototypes
void readCities(string cities[], int populations[]);
void displayCities(const string cities[], const int populations[]);
int searchCity(const string cities[], int size, const string cityName);

int main() {
    string cities[SIZE];
    int populations[SIZE];

    readCities(cities, populations);
    displayCities(cities, populations);

    string cityInput;
    cout << "\nEnter city name, Ctrl+Z to stop:\n";
    while (cin >> cityInput) {
        int index = searchCity(cities, SIZE, cityInput);
        if (index != -1) {
            cout << cities[index] << " has a population of " << populations[index] << endl;
        }
        else {
            cout << cityInput << " not found" << endl;
        }
        cout << "Enter city name, Ctrl+Z to stop:\n";
    }
    cout << "Goodbye. Have a nice day.\n";
    return 0;
}

// Function definitions
void readCities(string cities[], int populations[]) {
    cout << "Enter city and population:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> cities[i] >> populations[i];
    }
}

void displayCities(const string cities[], const int populations[]) {
    cout << "\nCity data:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << cities[i] << " " << populations[i] << endl;
    }
}

int searchCity(const string cities[], int size, const string cityName) {
    for (int i = 0; i < size; i++) {
        if (cities[i] == cityName)
            return i;
    }
    return -1; // Not found
}
