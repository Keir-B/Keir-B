//String Concatenation: Take two strings and display them joined together
//with a third variable

#include<iostream>
using namespace std;

int main () {
    string x, y, z;

    cout << "Enter two words:\n";
    cin >> x >> y;
    z = x + "" + y;
    cout << z << "\n";
}