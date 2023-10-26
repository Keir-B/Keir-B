//Longest Word: Write a program that receive a sentence and prints out length of 
//the longest word in the string. 
//The text has no punctuation and only words each separated by one space.
//Can you change the program to print out the longest word itself too?

#include<iostream>
using namespace std;

int main () {
    string s; // input

    cout << "Enter message:\n";
    getline(cin, s);

    string w1 = ""; // the longest word
    string w2 = ""; // the current word being evaluated

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            w2 = "";
        } else {
            w2 += s[i];
        }

        if (w2.length() > w1.length()) {
            w1 = w2;
        }
    }

    cout << w1 + " is the longest word being " << w1.length() << " characters long\n";
}