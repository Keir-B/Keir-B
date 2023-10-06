//User greeting: Prompt for name, then personalized message

#include<iostream>
using namespace std;

int main () {
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << ", welcome.\n";
}