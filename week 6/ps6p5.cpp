#include <iostream>
using namespace std;

int main() {
    char job;
    int hours;
    double rate, gross;

    cout << "Enter job code (L, J, A): ";
    cin >> job;
    cout << "Enter hours worked: ";
    cin >> hours;

    if ((job == 'L' || job == 'l') && hours > 40)
        rate = 50.00;
    else if ((job == 'L' || job == 'l') && hours <= 40)
        rate = 40.00;
    else if ((job == 'J' || job == 'j') && hours > 60)
        rate = 100.00;
    else if ((job == 'J' || job == 'j') && hours <= 60)
        rate = 75.00;
    else if ((job == 'A' || job == 'a') && hours > 40)
        rate = 25.00;
    else if ((job == 'A' || job == 'a') && hours <= 40)
        rate = 20.00;
    else {
        cout << "Invalid job code entered." << endl;
        return 0;
    }

    gross = hours * rate;

    cout << "Rate of Pay: $" << rate << endl;
    cout << "Gross Salary: $" << gross << endl;
    return 0;
}
