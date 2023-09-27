//Write a C++ program that calculates the sum of all even numbers from 1 to 50 using a `while` loop.

#include<iostream>
using namespace std;

int main () {
    int i = 2;
    int sum = 0; 
    while (i <= 50) { 
        sum += i;
        i += 2;
    }
    cout << sum << "\n";
}