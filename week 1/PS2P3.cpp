#include <iostream>
#include <string>  
using namespace std;

int main() {
    string lastName;
    double score;

    cout << "Enter your last name: ";
    cin >> lastName;  

    cout << "Enter your score: ";
    cin >> score;

    cout << lastName << " has a score of " << score << endl;

    return 0;
}