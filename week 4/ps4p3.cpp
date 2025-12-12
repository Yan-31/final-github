#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int books;
    double cost, total, shipping;

    cout << "Enter number of books: ";
    cin >> books;
    cout << "Enter cost per book: ";
    cin >> cost;

    total = books * cost;

    if (total > 50)
        shipping = 0;
    else
        shipping = 25;

    cout << fixed << setprecision(2);
    cout << "Order Total: $" << total << endl;
    cout << "Shipping: $" << shipping << endl;

    return 0;
}
