//Floyd's Triangle: Develop a program to generate and print Floyd's Triangle 
//for 'n' rows. Floyd's Triangle is a right-angled triangular array of natural numbers. 
//For 'n = 4', the pattern looks like this:
//1
//2 3
//4 5 6
//7 8 9 10

#include<iostream>
using namespace std;

int main () {
    int r; // rows
    int c = 1; // columns
    int n = 1; // current number
    cout << "Enter number of rows: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        for (int i2 = 1; i2 <= c; i2++) {
            cout << n << " ";
            n++;
        }
        c++;
        cout << "\n";
    }
}