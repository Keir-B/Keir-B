//Type Comparison: Investigate the behavior of adding two values
//in c++, comparing the results when both are integers,
//both are strings, or when one is a string and the other
//is an integer.

#include<iostream>
using namespace std;

int main () {
    string s1, s2;
    int x1, x2;
    cin >> s1 >> s2;
    cin >> x1 >> x2;
    string s3 = s1 + s2;
    int x3 = x1 + x2;
    cout << s3;
    cout << x3;

    
}