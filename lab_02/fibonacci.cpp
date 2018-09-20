/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab2D

Up to the 60th digit of the Fibonacci sequence is printed.
*/

#include <iostream>
using namespace std;

int main() {
    int fib[60];

    fib[0] = 0;
    cout << fib[0] << endl;

    fib[1] = 1;
    cout << fib[1] << endl;

    // Prints fibonacci sequence's 2nd number to the 60th.
    for (int i = 2; i < 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }

    return 0;
}

/* 
As the numbers approach two billions, 
negative signs start to appear in some numbers.
This is due to the number exceeding the amount of memory that was
allocated for the integer type and wrapping around to a become negative value.
*/