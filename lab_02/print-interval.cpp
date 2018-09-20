/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab2B

User inputs a lower bound integer and an upper bound integer.
All the integers between the two bounds are printed.
Lower bound is included but upper bound is not.
*/

#include <iostream>
using namespace std;

int main() {
    int lower, upper;
    cout << "Please enter lower integer: ";
    cin >> lower;

    cout << "Please enter upper integer: ";
    cin >> upper;

    cout << endl;
    // Prints all integers from lower bound to upper bound
    for (int i = lower; i < upper; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}