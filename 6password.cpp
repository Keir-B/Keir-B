//Develop a program that uses a do-while loop to keep asking the user for a password until 
//they enter the correct one.

#include<iostream>
using namespace std;

int main () {
    bool valid = false;
    int input;
    
    do {
        cout << "Enter password: ";
        cin >> input;
        
        if (input == 6009) {
            valid = true;
        } else {
            valid = false;
            cout << "Try again.\n";
        }

    } while (valid == false);

    cout << "cool\n";
}