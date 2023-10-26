//code that works

#include<iostream>
using namespace std;

int main () {
    int in;
    int x = 100000;
    int y = 100000;
    int z = 1;
    for (int i = 1; i <= 10; i++) {
        cin >> in;
        if (in < x && in < y) {
            if (z % 2 == 0) {
                y = in;
                z++;
            } else {
                x = in;
                z++;
            }
        }
    }
    cout << x + y << "\n";
}