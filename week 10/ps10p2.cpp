#include <iostream>
using namespace std;

void computePostage(double weight, int zip, double& weightCharge, double& areaCharge, double& postage) {
    // Weight charge
    if (weight > 100)
        weightCharge = weight * 0.02;
    else if (weight > 50)
        weightCharge = weight * 0.03;
    else
        weightCharge = weight * 0.05;

    // Area charge
    if (zip == 60171)
        areaCharge = 2.00;
    else if (zip == 60172)
        areaCharge = 2.50;
    else if (zip == 60635)
        areaCharge = 3.00;
    else
        areaCharge = 5.00;

    postage = areaCharge + weightCharge;
}

int main() {
    double weight, weightCharge, areaCharge, postage;
    int zip, count = 0;

    cout << "Enter weight and zip code (Ctrl+Z to stop):\n";
    while (cin >> weight >> zip) {
        computePostage(weight, zip, weightCharge, areaCharge, postage);
        cout << "Area Charge: $" << areaCharge << ", Weight Charge: $" << weightCharge
            << ", Postage: $" << postage << endl;
        count++;
    }
    cout << "\nTotal number of entries: " << count << endl;
    return 0;
}
