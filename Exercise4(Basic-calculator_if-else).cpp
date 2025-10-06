#include <iostream>
using namespace std;
int main () {
    int op;
    char choice;
    int num1, num2;
    
    do {
        cout << "Simple Arithmetic Operation Calculator\n" << endl;
        cout << "1.] Addition" <<endl;
        cout << "2.] Subtraction" <<endl;
        cout << "3.] Multiplication" <<endl;
        cout << "4.] Division" << endl;
        cout << "5.] Exit";
    cout << "\n\nInput which operation to use: ";
    cin >> op;
         if (op == 5){
            cout << "Exiting program.";
            return 0;
        }
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter second number: ";
      cin >> num2;
         
        if (op == 1){
            int add = num1 + num2;
            cout << "The sum of the given number " << num1 << " and " << num2 << " is " << add << ".";
        }
        else if (op == 2){
            int minus = num1 - num2;
            cout << "The difference of the given number " << num1 << " and " << num2 << " is " << minus << ".";
        }
        else if (op == 3){
            int times = num1 * num2;
            cout << "The product of the given number " << num1 << " and " << num2 << " is " << times << ".";
        }

        else if (op == 4){
                if (num2 == 0){
                    cout << "Error(Undefined). Division by zero is not allowed. ";
                }
                else {
            int divide = num1 / num2;
            int remainder = num1 % num2;
            cout << "The quotient of the given number " << num1 << " and " << num2 << " is " << divide << " remainder " << remainder << ".";
        }}
        
        else {
            cout << "Operation inputted is undefined. Please try again!";
        }
        cout << "\nThe program was executed successfully. \nDo you want to repeat it again(Y/N)? ";
        cin >> choice;
    }       while (toupper(choice)== 'Y');
            cout << "Exiting program.";
      
return 0;
            }