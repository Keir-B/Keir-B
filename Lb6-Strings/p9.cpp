//Count Occurrences: 
//Write a program that takes a text string and a character as input 
//and counts the number of occurrences of that character within the string

#include<iostream>
using namespace std;

int main () {
    string s1;
    char x;

    cout << "Enter a word and a character:\n";
    getline(cin, s1);
    cin >> x;
    
    int i = 0;
    int ocr = 0;
    while (i < s1.length()) {
        if (s1[i] == x) {
            ocr++;
        }
        i++;
    }
    cout << ocr << "\n";
}