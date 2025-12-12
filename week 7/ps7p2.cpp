#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string lastName;
    int hits, atBats;
    int count = 0;

    cout << "Enter player last name, hits, and at bats (Ctrl+Z to stop):\n";

    while (cin >> lastName >> hits >> atBats) {
        double battingAvg = (atBats != 0) ? static_cast<double>(hits) / atBats : 0.0;
        cout << fixed << setprecision(3);
        cout << lastName << "'s batting average: " << battingAvg << endl;
        count++;
    }

    cout << "\nNumber of players entered: " << count << endl;
    return 0;
}
