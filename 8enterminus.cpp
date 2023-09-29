//Create a C++ program that uses a `do-while` loop to repeatedly ask the user for a positive integer 
//until they enter a negative number. 
//Keep track of how many positive integers were entered and display that count at the end.

#include<iostream>
using namespace std;

int main () {
    int wat;
    int no = 0;
    int ye = 0;

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