/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab2A

User inputs a number that is between 0 and 100. 
The number would asked to be re-entered if it is not between 0 and 100.
The number squared is printed.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Please enter an integer between 0 and 100: ";
    int num = -1;
    bool valid = false;
    
    cin >> num;

    // While the number isn't valid, repeat input
    while (!valid) {
        if (num > 0 && num < 100) { // If number is between 0 and 100
            valid = true;
        } else {
            cout << "Your integer needs to be between 0 and 100. Please re-renter: ";
            cin >> num;
        }
    }

    num = num * num;
    cout << "Number squared is " << num << endl;

    return 0;
}