#include <iostream>
using namespace std;

int main() {
    double lbs, rate, total;

    cout << "Enter quantity in pounds: ";
    cin >> lbs;

    if (lbs > 100)
        rate = 0.10;
    else if (lbs >= 50)
        rate = 0.25;
    else
        rate = 0.50;

    total = lbs * rate;

    cout << "Price per pound: $" << rate << endl;
    cout << "Total cost: $" << total << endl;
    return 0;
}