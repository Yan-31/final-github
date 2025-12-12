#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, result;

    cout << "Enter first integer: ";
    cin >> n1;

    cout << "Enter second integer: ";
    cin >> n2;

    cout << "Enter third integer: ";
    cin >> n3;

    result = (n1 + n2) * n3;

    cout << "The result is: " << result << endl;

    return 0;
}