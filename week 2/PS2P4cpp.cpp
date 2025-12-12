#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastName;
    int credits;
    double tuition;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter number of credits: ";
    cin >> credits;

    tuition = (credits * 250) + 100;

    cout << lastName << "'s tuition is $" << tuition << endl;

    return 0;
}

