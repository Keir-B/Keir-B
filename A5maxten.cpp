//Write a C++ program that receives 5 numbers from the user 
//and prints the maximum value of the 5 numbers on the screen. 
//Use a while loop to solve this problem.

#include<iostream>
using namespace std;

int main () {
    int counter = 1;
    int input;
    int max = -1;

    while (counter <= 5) {
        cout << "Enter a number: ";
        cin >> input;
        
        if (input > max) {
            max = input;
        }
        counter++;
    }
    cout << "Max is: " << max << "\n";
}