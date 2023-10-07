//Develop a program that uses a 'while' loop to calculate 
//and print the sum of the squares of the first 15 positive integers

#include<iostream>
using namespace std;

int main () {
    int i = 1;
    int sum = 0;
    while (i <= 15) {
        sum += i * i;
        i++;
    }
    cout << sum << "\n";
}