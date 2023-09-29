//Write a C++ program that receives number items
//in an invoice from user (n) and then receives price of those n items
//from user and prints total of prices of all items. 

#include<iostream>
using namespace std;

int main () {
    int items; //input
    cout << "How many items? ";
    cin >> items;

    int prices;
    int counter = 1;
    int total = 0;
    
    do {
        cout << "Enter price: $";
        cin >> prices;
        total += prices;
        counter++;
        
    } while (counter <= items);

    cout << "Your total is $" << total << "\n";
}