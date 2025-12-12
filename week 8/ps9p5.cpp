#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getLabFee(string dept, int code) {
    if (dept == "CIS" && code == 101) return 50.0;
    else if (dept == "CIS" && code == 121) return 100.0;
    else if (dept == "MAT" && code == 111) return 25.0;
    else if (dept == "MAT" && code == 112) return 35.0;
    else if (dept == "ENG" && code == 100) return 55.0;
    else return 50.0;
}

int main() {
    string dept;
    int code;
    double totalFees = 0;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter department and course code (Ctrl+Z to stop):\n";

    while (cin >> dept >> code) {
        double fee = getLabFee(dept, code);
        cout << dept << " " << code << " - Lab Fee: $" << fee << endl;

        totalFees += fee;
        count++;

        cout << "Enter department and course code (Ctrl+Z to stop):\n";
    }

    if (count > 0)
        cout << "\nAverage Lab Fee: $" << totalFees / count << endl;
    cout << "Total Lab Fees Collected: $" << totalFees << endl;

    return 0;
}
