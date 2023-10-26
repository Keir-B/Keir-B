//Swap Words: Write a program that reverses the order of the two words in given text string 
//that has two words separated by a space character. 
//For example, if the input is "hello world" the program should output "world hello".

#include<iostream>
using namespace std;

int main () {
    string s; // input

    cout << "Enter message:\n";
    getline(cin, s);

    int i = 0;
    string w1r = "";
    string w2r = "";
    bool firstWord = true;
    while (i < s.length()) {
        if (s[i] == ' ') {
            firstWord = false;
        } else {
            if (firstWord) {
                w1r += s[i];
            } else {
                w2r += s[i];
            }
        }
        i++;
    }
    cout << w2r + " " + w1r + "\n";
}