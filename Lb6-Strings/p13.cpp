//Word Count: Create a program that receives a sentence from the user 
//and counts the number of words in the sentence. 
//A word is defined as a sequence of characters separated by spaces.

#include<iostream>
using namespace std;

int main () {
    string s;
    int wc = 1; // word count
    int ltr = 0;

    cout << "Enter message:\n";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
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
}