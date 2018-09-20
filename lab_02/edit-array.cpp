/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab2C

User inputs the index and the new value desired to assigned to the index.
If index is valid, the program continues to ask for a new value and an index.
If index is invalid, the program exits.
*/

#include <iostream>
using namespace std;

int main() {
    int myData[10];

    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
    }

    // Print out the array
    cout << "[ ";
    for (int i = 0; i < 10; i++) {
        if (i < 9) {
            cout << myData[i] << ", ";
        } else {
            cout << myData[i] << " ]" << endl;
        }
    }

    int new_val, index;
    bool is_valid;

    // Asks for input
    do {
        is_valid = false;
        cout << "Input index: ";
        cin >> index;
        cout << "Input value: ";
        cin >> new_val;

        // If value is in range, set value and print array
        if (index >= 0 && index < 10) {
            myData[index] = new_val;
            is_valid = true;

            cout << "[ ";
            for (int i = 0; i < 10; i++) {
                if (i < 9) {
                    cout << myData[i] << ", ";
                } else {
                    cout << myData[i] << " ]" << endl;
                }
            }
        }
    }
    while (is_valid);

    cout << "Index is out of range. Program exiting." << endl;
    return 0;
}