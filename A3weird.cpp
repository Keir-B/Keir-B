//Write a C++ program that uses a `while` loop to find the sum of 
//all numbers from 1 to 100 that are divisible by both 3 and 5.

#include<iostream>
using namespace std;

int main () {
    int i = 15; //starting at the first number divisible by both 3 and 5
    int sum = 0;
    while (i <= 100) {
        if (i % 15 == 0) { //15 because 15 is divisble by both 3 and 5 
            sum += i;
        }
        i++;
    }
    cout << sum << "\n";
}

/*
Old Code

int main () {
    int i = 1;
    int sum = 0; 
    while (i <= 100) {

        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }

        i++;
    }
    cout << sum << "\n";
}
*/