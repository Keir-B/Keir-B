//Is the input number prime?

#include<iostream>
using namespace std;

int main () {
    int num, prime;
    cout << "Enter Number: ";
    cin >> num;

    for (int i = num - 1; i > 1; i--) {
        if (num % i == 0) {
            prime = 0;
        }
    }
    
    if (prime == 0) {
        cout << num << " is not a prime number\n";
    } else {
        cout << num << " is a prime number\n";
    }
}