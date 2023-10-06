//Develop a C++ program that uses a `do-while` loop to repeatedly ask the user for a number 
//and adds it to a running total. 
//The loop should continue until the user enters 0. After exiting the loop, display the total.

#include<iostream>
using namespace std;

int main () {
    int total = 0;
    int x = 1; // input

    while (x != 0) {
        cout << "Enter a number: ";
        cin >> x;
        total += x;
    }
    cout << "Total: " << total << "\n";
}

/*

Counter for non-zero numbers entered (original code):

int main () {
    int wat; // input
    int total = 0;
    int ye = 0;

    do {
        cout << "Enter a number: ";
        cin >> wat;

        if (wat != 0) {
            total++;
        } else {
            ye++;
        }

    } while (ye == 0);

    cout << "You entered " << total << " non-zero numbers\n";
}

*/