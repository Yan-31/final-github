#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealTotal, tip, totalWithTip;
    cout << "Enter total meal cost: ";
    cin >> mealTotal;

    tip = mealTotal * 0.15;
    totalWithTip = mealTotal + tip;

    cout << fixed << setprecision(2);
    cout << "Tip: $" << tip << endl;
    cout << "Total with tip: $" << totalWithTip << endl;
    return 0;
}