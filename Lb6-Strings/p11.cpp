//Reverse String: Write a program that reverses a given text string. 
//For example, if the input is "hello," the program should output "olleh."

#include<iostream>
using namespace std;

int main () {
    string x; // input
    
    cout << "Enter message:\n";
    getline(cin, x);
    
    string rvs = x; // reverse
    int pal = x.length() - 1;
    for (int i = 0; i < x.length(); i++) {
        rvs[i] = x[pal];
        pal--;
    }
    cout << rvs << "\n";
}