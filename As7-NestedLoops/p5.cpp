/*
First Rank: Create a program that receives a sentence from the user, 
including a set of first names separated by space, 
and prints out the name that would show up first in alphabetical order. 
You cannot assume no two names in the list share the same first character. 
Example: if the input is "John Lauren Ashton Nicholas Ava," 
the output should be "Ashton."
*/

#include<iostream>
using namespace std;

int main () {
    string in; // input
    string fr = "{{{{{{"; // first rank
    string cn = ""; // current name
    int idx = 0; // current index of current name in input line
    cout << "Enter list of names separated by spaces:\n";
    getline(cin, in);

    for (idx; idx < in.length(); idx++) {
        while (in[idx] != ' ') {
            cn += in[idx];
            idx++;
            if (idx >= in.length()) {
                break;
            }
        }

        if ((int)cn[0] == (int)fr[0]) {
            for (int i2 = 0; i2 < cn.length(); i2++) {
                if ((int)cn[i2] < (int)fr[i2]) {
                    fr = cn;
                } else if ((int)cn[i2] > (int)fr[i2]) {
                    break;
                }
            }  
        } else if ((int)cn[0] < (int)fr[0]) {
            fr = cn;
        }
         
        if (in[idx] == ' ') {
            cn = "";
        }
    }
    cout << fr + "\n";
}

/*
code scrap:

 else if (in[i-1] == ' ') {
            for (int i2 = i; in[i2] != ' ' || i2 < in.length(); i2++) {
                cn += in[i2];
            }
        }

    for (int i2 = i; in[i2] != ' '; i2++) {
            cn += in[i2];
        }
        if (in[i] == ' ') {
            cn = "";
        }

        in[idx] != ' '
         
        for (int i2 = 1; i2 <= tn; i2++) {
        for (idx; idx < in.length(); idx++) {
            cn += in[idx];
        }
        if ((int)cn[0] == (int)fr[0]) {
            for (int i2 = 0; i2 < cn.length(); i2++) {
                if ((int)cn[i2] < (int)fr[i2]) {
                    fr = cn;
                }
            }  
        } else if ((int)cn[0] < (int)fr[0]) {
            fr = cn;
        }
         
        if (in[idx] == ' ') {
            cn = "";
            idx++;
        }
    }
*/