/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab1B

User inputs three integer numbers and the smallest number is printed.
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

    cout << "Enter the third number: ";
    int third_num = 0;
    cin >> third_num;

    // Compares the two numbers and prints whichever is smaller
    int smallest_num = 0;
    if (first_num < second_num) {
        if (first_num < third_num) {
            smallest_num = first_num;
        } else {
            smallest_num = third_num;
        }
    } else {
        if (second_num < third_num) {
            smallest_num = second_num;
        }else {
            smallest_num = third_num;
        }
    }

    cout << endl << "The smallest of the three is: " << smallest_num << endl;
    
    return 0;
}