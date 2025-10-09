//Buhawe, Norielle John D.  BSCS 1-A
#include <iostream>
using namespace std;
int main (){
    char opt;
        cout << "Choose which to check: " <<endl;
        cout <<  "A. Leap Year\n";
        cout <<  "B. Pyramid Triangle\n";
        cout <<  "C. Inverted Right-Aligned Right Triangle\n";
        cout <<  "D. Inverted Left-Aligned Right Triangle\n";
        cout <<  "E. Isosceles Triangle\n";
        cout <<  "F. Exit\n";

        cout <<  "\nEnter choice: ";
        cin >> opt;
            opt = toupper (opt);

        while (opt != 'F') {
            switch (opt){
                 case 'A':
                 int num, year;

                    cout << "Enter year: ";
                    cin >> year;
                        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                            cout << "The year " << year << " is a leap year.";
                        }   
                        else {
                            cout << "The year " << year << " is not a leap year.";
                        }
                        break;
                case 'B':
                    cout << "Enter number of rows: ";
                    cin >> num;
                        for (int i = 1; i <= num; i++){
                            for (int s =  num; s > i; --s) {
                                cout << " ";
                            }
                            for (int j = 1; j <= ((2*i)-1); j++){
                                cout << "*";
                            }
                            cout << endl;
                        }
                        break;
                case 'C':
                    cout << "Enter number of rows: ";
                    cin >> num;
                        for (int i = 1; i <= num; i++){
                            for (int j = num; j >= i; --j){
                                cout << "*";
                            }
                            cout <<endl;
                        }
                        break;
                case 'D':
                    cout << "Enter number of rows: ";
                    cin >> num;
                        for (int i = 1; i <= num; i++){
                            for (int s = 0; s < i; ++s){
                                cout << " "; }
                            for (int j = num; j >= i; --j){
                                cout << "*";
                            }      
                            cout << endl;
                        }
                        break;
                case 'E':
                    cout << "Exiting Program.";
                        return 0;
                default:
                    cout<<"Invalid Input! Please Try Again!\n";
                break;
            }
           
        }
return 0;      
}
