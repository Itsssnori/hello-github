#include <iostream>
using namespace std;
int main() {
    int grade;
    char choice;
    do {
    cout << "Input grade: ";
    cin >> grade;
    if (grade % 2 == 0) {
        cout << "The inputted grade is Even.\n";
    }
    else {
        cout << "The inputted grade is Odd.\n";
    }
        if (grade >=95){
            cout << "You got an A+";
        }
        else if (grade >= 90){
            cout << "You got an A";
        }
        else if (grade >= 85){
            cout << "You got a B";
        }
        else if (grade >= 80){
            cout << "You got a C";
        }
        else if (grade >= 75){
            cout << "You got a D";
        }
        else {
            cout << "You failed";
    } cout << "\nDo you want to check grades again (Y/N)? ";
        cin >> choice;
      }
    while (toupper(choice) == 'Y');
        cout << "Exiting program.";
    return 0;
}
