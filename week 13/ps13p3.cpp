#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Global Student structure
struct Student {
    string firstName;
    string lastName;
    char districtCode; // 'I' or 'O'
    int credits;
    double tuition;
};

// Function prototypes
double computeTuition(char districtCode, int credits);
void displayStudents(const vector<Student>& students);

int main() {
    vector<Student> students;
    Student s;

    cout << "Enter student data (Ctrl+Z to stop):\n";

    while (true) {
        cout << "\nFirst name: ";
        if (!(cin >> s.firstName)) break;
        cout << "Last name: ";
        cin >> s.lastName;
        cout << "District code (I/O): ";
        cin >> s.districtCode;
        cout << "Credits enrolled: ";
        cin >> s.credits;

        s.tuition = computeTuition(s.districtCode, s.credits);
        students.push_back(s);
    }

    displayStudents(students);
    cout << "Number of students: " << students.size() << endl;

    return 0;
}

// Function to compute tuition
double computeTuition(char districtCode, int credits) {
    double rate = (districtCode == 'I' || districtCode == 'i') ? 250.0 : 500.0;
    return credits * rate;
}

// Function to display students
void displayStudents(const vector<Student>& students) {
    cout << "\nStudent Tuition Records:\n";
    for (const auto& s : students) {
        cout << s.firstName << " " << s.lastName
            << ", District: " << s.districtCode
            << ", Credits: " << s.credits
            << ", Tuition: $" << s.tuition << endl;
    }
}
