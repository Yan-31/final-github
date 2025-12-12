#include <iostream>
using namespace std;

int main() {
    double weight, rate, total;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    if (weight > 100)
        rate = 0.50;
    else if (weight >= 30)
        rate = 0.25;
    else if (weight >= 20)
        rate = 0.20;
    else
        rate = 0.10;

    total = weight * rate;

    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate per pound: $" << rate << endl;
    cout << "Total paid: $" << total << endl;
    return 0;
}
