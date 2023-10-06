//Create a C++ program that uses a `do-while` loop to repeatedly ask the user for a positive integer 
//until they enter a negative number. 
//Keep track of how many positive integers were entered and display that count at the end.

#include<iostream>
using namespace std;

int main () {
    int wat; // input
    int no = 0; // total numbers entered
    int ye = 0; // indicator

    do {
        cout << "Enter a positive number: ";
        cin >> wat;

        if (wat >= 0) {
            no++;
        } else {
            ye++;
        }

    } while (ye < 1);

    cout << "You entered " << no << " positive numbers\n";
}

/*

int c = 0; // counter
int x = 1; // input

while (x > 0) {
    cout << "Enter a number: ";
    cin >> x;
    if (x > 0) {
        c++;
    }
    cout << "You entered" << c << " positive numbers.\n";
}

*/