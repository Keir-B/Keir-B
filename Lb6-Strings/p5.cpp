//Character Exploration: Take text input
//print first, second, and last characters of the input

#include<iostream>
using namespace std;

int main () {
    string s1;
    getline(cin, s1);
    int x = s1.length();
    cout << s1[0] << s1[1] << s1[x-1] << "\n";
}