//Last Word Extractor
//print last word

#include<iostream>
using namespace std;

int main () {
    string s;
    string lw = "";
    int wc = 1; // word count
    int ltr = 0; // letter count
    int idx; // index location
    int fnd = 0;

    cout << "Enter message:\n";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) { // counts letters, and words by detecting spaces
        if (s[i] == ' ') {
            wc++;
        } else {
            ltr++;
        }
    }

    if (ltr == 0) { //checks in case user entered only spaces
        cout << "shut up\n";
    } else {
        cout << wc << " words counted\n";
    }

    if (wc != 1) {
        for (int i2 = s.length()-1; s[i2] != ' '; i2--) {
            if (s[i2-1] == ' ') {
                idx = i2;
            }
        }
        for (int i3 = idx; i3 < s.length(); i3++) {
            lw.push_back(s[i3]);
        }
        cout << "last word is " << lw << "\n";
    } else {
        cout << "last word is " << s << "\n";
    }

}