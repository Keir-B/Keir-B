//Palindrome Check: Develop a program that checks if a given text string is a palindrome. 
//A palindrome is a word, phrase, or sequence that reads the same backward as forward.

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

    if (rvs == x) {
        cout << x << " is a palidrome.\n";
    } else {
        cout << x << " is not a palindrome.\n";
        cout << x << " != " << rvs << "\n";
    }
}