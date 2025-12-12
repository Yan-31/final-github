#include <iostream>
using namespace std;

int main() {
    double purchase, current, percentChange;
    cout << "Enter purchase price: ";
    cin >> purchase;
    cout << "Enter current price: ";
    cin >> current;

    percentChange = ((current - purchase) / purchase) * 100;

    cout << "Percentage change: " << percentChange << "%" << endl;
    return 0;
}