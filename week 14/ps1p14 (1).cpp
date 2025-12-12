#include <iostream>
#include <string>
using namespace std;

class Membership {
private:
    string firstName;
    string lastName;
    int age;
    string type;

public:
    // Constructor / default values
    Membership() {
        firstName = "Not Entered";
        lastName = "Not Entered";
        age = 18;
        type = "Bronze";
    }

    // Setters
    void Member_First_Name(string f) {
        firstName = f;
    }

    void Member_Last_Name(string l) {
        lastName = l;
    }

    void Member_Age(int a) {
        age = a;
    }

    void Membership_Type(string t) {
        if (t == "Gold" || t == "Silver" || t == "Bronze")
            type = t;
        else
            type = "Bronze"; // default
    }

    // Compute membership cost
    double Membership_Cost() {
        double cost;

        if (type == "Gold") cost = 1200.0;
        else if (type == "Silver") cost = 1000.0;
        else cost = 500.0;

        if (age > 50)
            cost *= 0.90;  // 10% discount

        return cost;
    }

    // Display function
    void display() {
        cout << "\n--- Member Information ---\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Membership Type: " << type << endl;
        cout << "Membership Cost: $" << Membership_Cost() << endl;
    }
};

int main() {
    Membership m;
    string f, l, t;
    int a;

    cout << "Enter membership data (CTRL+Z to stop)\n\n";

    while (true) {
        cout << "First Name: ";
        if (!(cin >> f)) break;

        cout << "Last Name: ";
        cin >> l;

        cout << "Age: ";
        cin >> a;

        cout << "Membership Type (Gold/Silver/Bronze): ";
        cin >> t;

        // Load into object
        m.Member_First_Name(f);
        m.Member_Last_Name(l);
        m.Member_Age(a);
        m.Membership_Type(t);

        // Display
        m.display();

        cout << endl;
    }

    return 0;
}
