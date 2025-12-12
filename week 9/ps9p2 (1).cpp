#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeBattingAverage(double hits, double atBats) {
    if (atBats == 0) return 0;
    return hits / atBats;
}

int main() {
    string lastName;
    double hits, atBats;
    int count = 0;

    cout << fixed << setprecision(3);

    cout << "Enter last name, hits, and at-bats (Ctrl+Z to stop): ";
    while (cin >> lastName >> hits >> atBats) {
        double average = computeBattingAverage(hits, atBats);
        cout << lastName << " - Batting Average: " << average << endl;
        count++;
        cout << "Enter last name, hits, and at-bats (Ctrl+Z to stop): ";
    }

    cout << "\nTotal Players Entered: " << count << endl;

    return 0;
}
