#include <iostream>
using namespace std;
int main (){
    int num1, num2, times;
    int op;
        cout << "Simple Calculator" <<endl;
        cout << "1.] Sum" <<endl;
        cout << "2.] Difference" <<endl;
        cout << "3.] Product" <<endl;
        cout << "4.] Quotient" <<endl;
        cout << "5.] Exit" <<endl;
        cout << "\nInput number of times to do the operations: ";
        cin >> times;
            int i = 0;
            while (i < times) {
                cout << "\nInput operation: ";
                cin >> op;
                    switch (op){
                         case 5: 
                        cout << "Exiting program.";
                        return 0;
                    }
                cout << "Input first number: ";
                cin >> num1;
                cout << "Input second number: ";
                cin >> num2;
                    switch (op){
                        case 1: 
                        cout << "Result: " << num1 + num2 << " ";
                        break;

                        case 2:
                        cout << "Result: " << num1 - num2 << " ";
                        break; 

                        case 3:
                        cout << "Result: " << num1 * num2 << " ";
                        break;

                        case 4:
                            if (num2==0){
                                cout << "Calculation Error. Input a positive integer. ";
                            }
                            else {
                        cout << "Result: " << num1 / num2 << " "; }
                        break;

                        default: 
                        cout << "\nInput a valid operation.";
                        break;
                    } 

            i++;}

    return 0;
}