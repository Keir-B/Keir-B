//Singular Reverse: Write a program that reverses each word in a given text string
//that has two words separated by a space character. 
//For example, if the input is "hello world" the program should output "olleh dlrow"

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
                w1r = s[i] + w1r;
            } else {
                w2r = s[i] + w2r;
            }
        }
        i++;
    }
    cout << w1r + " " + w2r + "\n";
}

/*

My code (original code):

int main () {
    string s; // input
    string s2 = "";
    
    cout << "Enter message:\n";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            for (int i2 = i-1; i2 >= 0; i2--) {
                s2.push_back(s[i2]);
            }
            s2.push_back(' ');
        } else if (i+1 == s.length()) {
            for (int i3 = i;s[i3] != ' '; i3--) {
                s2.push_back(s[i3]);
            }
        }
    }
    cout << s2 << "\n";
}

*/