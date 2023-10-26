//First Rank: Create a program that receives a sentence 
//from the user including a set of first names separated 
//by space and prints out the name that would show up 
//first in alphabetical order. You can assume no two names
//in the list share the same first character. 
//Example: if the input is "John Lauren Samuel Nicholas Eva", 
//the output should be "Eva". 

#include<iostream>
using namespace std;

int main () {
    string s; // input

    cout << "Enter message:\n";
    getline(cin, s);

    string w1 = "{"; // first rank name
    string w2 = ""; // the current word being evaluated

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            w2 = "";
        } else {
            w2 += s[i];
        }

        if ((int)w2[0] <= (int)w1[0] && (int)w2[0] != 0) {
            w1 = w2;
        }
    }

    cout << w1 << " is the first name in alphabetical order\n";
}