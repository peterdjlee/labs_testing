/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab1C

User inputs a year and whether the year is a leap year of a common year is printed.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter year: ";
    int year;
    cin >> year;
    bool is_leap = false;

    /* 
    The year is a leap year only if its divisible by 4.
    If the year is divisible by 100, then it must be divisible by 400 for it to be a leap year.
    */
   
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                is_leap = true;
            }
        } else {
            is_leap = true;
        }
    }

    if (is_leap) {
        cout << endl << year << " is a leap year" << endl;
    } else {
        cout << endl << year << " is a common year" << endl;
    }

    return 0;
}