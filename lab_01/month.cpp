/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab1D

User inputs a year and a month and the number of days in that month in that year is printed.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter year: ";
    int year = 0;
    cin >> year;

    cout << "Enter month: ";
    int month = 0;
    cin >> month;

    bool is_leap = false;

    // Determining if the year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                is_leap = true;
            }
        } else {
            is_leap = true;
        }
    }

    // Default is 30 days
    int days = 30;

    // If it's a leap year, February has 29 days
    if (is_leap) {
        if (month == 2) {
            days = 29;
        }
    } else { 
        // 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31
        
        if (month == 2) {
            days = 28;
        } else if (month < 8) {
            if (month % 2 == 1) { // odd
                days = 31;
            }
        } else {
            if (month % 2 == 0) { // even
                days = 31;
            }
        }
    }

    cout << days << " days" << endl;

    return 0;
}