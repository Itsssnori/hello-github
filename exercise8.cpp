#include <iostream>
using namespace std;

int main (){
    char op;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    switch (op){
        case '+':
        cout << "Result: " << num1 + num2;
        break;

        case '-':
        cout << "Result: " << num1 - num2;
        break;

        case '*':
        cout << "Result: " << num1 * num2;
        break;

        case '/':
            if (num2 == 0){
                cout << "Error: Division by zero is not allowed.";
            }
            else {
                cout << "Result: " << num1 / num2;
            }
        break;
    }
    return 0;
}