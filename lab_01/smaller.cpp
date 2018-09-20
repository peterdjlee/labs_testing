/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab1A

User inputs two integer numbers and the smaller number is printed.
*/

#include <iostream>
using namespace std;

int main() {
    // Sends string to output
    cout << "Enter the first number: ";
    int first_num = 0;
    // Asks for user input and assigns the value to first_num
    cin >> first_num;
    
    cout << "Enter the second number: ";
    int second_num = 0;
    cin >> second_num;

    // Compares the two numbers and prints whichever is smaller
    if (first_num < second_num) {
        cout << endl << "The smaller of the two is: " << first_num << endl;
    } else {
        cout << endl << "The smaller of the two is: " << second_num << endl;
    }

    return 0;
}