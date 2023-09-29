//Write a C++ program that receives 5 numbers from the user 
//and prints "Ascending" if numbers that are entered are in the ascending order. 
//Use a while loop to solve this problem. 
//Example of an ascending list: 1, 9, 25, 45, 129

#include<iostream>
using namespace std;

int main () {
    int counter = 1;
    int input;
    int curnum = -1;
    int isit = 0;

    while (counter <= 5) {
        cout << "Enter a number: ";
        cin >> input;
        
        if (input < curnum) {
            isit++;
        }
        
        curnum = input;
        counter++;
    }

    if (isit != 0) {
        cout << "Not ascending\n";
    } else {
        cout << "Ascending\n";
    }
}