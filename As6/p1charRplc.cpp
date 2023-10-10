//Word Character Replacement:
//input: 1 string, 2 words. Replace second word with '*'

#include<iostream>
using namespace std;

int main () {
    string s;
    int wc = 1; // word count
    int ltr = 0; // letter count
    int sw; // start of the second word

    cout << "Enter message:\n";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) { // counts letters, and words by detecting spaces
        if (s[i] == ' ') {
            wc++;
            sw = i;
        } else {
            ltr++;
        }
    }

    if (ltr == 0) { //checks in case user entered only spaces
        cout << "shut up\n";
    } else if (wc != 2) {
        cout << wc << " words counted\n";
        cout << "Please enter 2 words.\n";
    } else {
        for (int i2 = sw + 1; i2 < s.length(); i2++) {
            s[i2] = '*';
        }
        cout << s << "\n";
    }
    
}