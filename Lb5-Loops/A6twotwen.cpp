//Write a C++ program that uses a `while` loop to print even numbers from 2 to 20 (inclusive).

#include<iostream>
using namespace std;

int main () {
    int i = 2; //first number
    while (i <= 20) { // up to 20
        cout << i << "\n";
        i += 2;
    }
}