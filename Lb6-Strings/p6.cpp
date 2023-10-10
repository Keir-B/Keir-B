//Character Replacement: Text input
//replace first character with "S"
//print modified text

#include<iostream>
using namespace std;

int main () {
    string s1;
    getline(cin, s1);
    s1[0] = 'S';
    cout << s1 << "\n";
}