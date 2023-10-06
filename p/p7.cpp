//Find Substring: Create a C++ program that asks the user to enter a text string 
//and a search term. 
//Use the find function to check if the search term is present in the input string. 
//Print a message indicating whether the search term was found or not. 
//You can use str.find(str2) to get the location of str2 in the str.

#include<iostream>
using namespace std;

int main () {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int found = s1.find(s2);
    if (found != string::npos) {
        cout << "found\n";
        cout << found << "\n";
    } else {
        cout << "Not found\n";
        cout << found << "\n";
    }
}