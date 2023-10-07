//Replace Character: Create a program that receives a text string from the user 
//and replaces all occurrences of a specified character 
//with another character of the user's choice. Print the modified string.

#include<iostream>
using namespace std;

int main () {
    string s1;
    char x, y;

    cout << "Enter a word:\n";
    getline(cin, s1);
    cout << "Enter a letter you want to replace with another letter, then enter that letter:\n";
    cin >> x >> y;
    
    int i = 0;
    while (i < s1.length()) {
        if (s1[i] == x) {
            s1[i] = y;
        }
        i++;
    }
    cout << s1 << "\n";
}