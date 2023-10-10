//Text Abbreviation
//input: 1 string. Abbreviate sentence to initials.

#include<iostream>
using namespace std;

// read first character then, read after every space.
// if space then store next char into second string.

int main () {
    string s, s2;
    int wc = 1; // word count
    int x = 1; // for abbreviating

    cout << "Enter message:\n";
    getline(cin, s);
    s2 = s;

    for (int i = 0; i < s.length(); i++) { // counts letters, and words by detecting spaces
        if (s[i] == ' ') {
            wc++;
        }
    }

    for (int i2 = 1; i2 < s.length(); i2++) { // Abbreviates
        if (s[i2] == ' ' && s[i2+1] != ' ') {
            s2[x] = s[i2+1];
            x++;
        }
    }

    for (int i3 = wc; i3 < s2.length(); i3++) { // removes excess
        s2[i3] = ' ';
    }

    cout << s2 << "\n";
}