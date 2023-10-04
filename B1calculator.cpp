//Use a 'do-while' loop to simulate a basic calculator. 
//Ask for two numbers and an operation, then display the result. 
//Ask if use wants to perform another calculation and continue until they choose to exit

#include<iostream>
using namespace std;

int main() {
    int x, y; // numbers
    char op; // operator
    string cont; // continue or exit
    int out = 0; // result

    do {
        cout << "Enter the first number, then the second number:\n";
        cin >> x >> y;
        cout << "Enter the operation (+,-,*,/): ";
        cin >> op;

        switch(op) {
            case '+':
                out = x + y;
                break;
            case '-':
                out = x - y;
                break;
            case '*':
                out = x * y;
                break;
            case '/':
                out = x / y;
                break;
            default:
                cout << "Invalid operation.\n";
                break;
        }
        cout << x << " " << op << " " << y << " = " << out << "\n";
        cout << "Would you like to make another calculation? (yes/no)\n";
        cin >> cont;

    } while (cont == "yes");
}