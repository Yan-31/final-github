#include <iostream>
using namespace std;

int main() {
    double exam1, exam2, total;
    cout << "Enter first exam score (60%): ";
    cin >> exam1;
    cout << "Enter second exam score (40%): ";
    cin >> exam2;

    total = exam1 * 0.6 + exam2 * 0.4;

    cout << "Total exam score: " << total << endl;
    return 0;
}