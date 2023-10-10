//First 'a' Word Index
//print index location of first word starting with 'a' and print "not found" if not found

#include<iostream>
using namespace std;

int main () {
    string s;
    int wc = 1; // word count
    int ltr = 0; // letter count
    int idx; // index location
    int fnd = 0;

    cout << "Enter message:\n";
    getline(cin, s);

    if (s[0] == 'a') {
        idx = 0;
        fnd++;
    }

    for (int i = 0; i < s.length(); i++) { // counts letters, and words by detecting spaces
        if (s[i] == ' ') {
            wc++;
            if (s[i+1] == 'a' && fnd == 0) {
                idx = i+1;
                fnd++;
            }
        } else {
            ltr++;
        }
    }

    if (ltr == 0) { //checks in case user entered only spaces
        cout << "shut up\n";
    } else {
        cout << wc << " words counted\n";
    }
    if (fnd == 0) {
        cout << "not found\n";
    } else {
        cout << "first word starting with 'a' is located at index " << idx << "\n";
    }
}