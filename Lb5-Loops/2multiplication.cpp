//Multiplication table up to 10 for inputed number

#include<iostream>
using namespace std;

int main () {
    int num; 
    cout << "What number you would like me to print the multiplication table for? ";
    cin >> num; 
    int i = 1; 
    while (i <= 10) { 
        cout << i * num << "  ";
        i++;
    }
    cout << "\n";
}