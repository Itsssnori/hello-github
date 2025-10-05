#include <iostream>
using namespace std;
int main (){
    int first, second, times, num;
    char choice;
        do {
        cout << "Input number of times to check Fibonacci sequence: ";
        cin >> times;
            if (times <= 0){
                 cout << "Invalid number. Input a valid integer.\n";
            }
        for (int i = 0; i < times; i++){
                cout << "Input the number of the Fibonacci sequence: ";
                cin >> num;
                    if (num <= 0){
                        cout << "Invalid number. Input a valid integer.\n";
                    }
                    else {
                        int j = 0;
                        first = 0, second = 1;
                    while (j < num){
            if (j==0){
                cout << first << " ";
            } else if (j== 1){
                cout << second << " ";
            }
            else {
                int next = first + second;
                cout << next << " ";
                first = second;
                second = next;
            }
          j++;} }}
          cout << "Program executed successfully. \nDo you want to repeat(Y/N)? ";
            cin >> choice;

          } while (toupper (choice) == 'Y');
          cout << "Exiting program.";

return 0;}
