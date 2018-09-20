/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab3D

User inputs earlier date and later date.
The west elevation level is printed from later date to earlier date.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::ifstream;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    // Get rid of the first header line
    string junk;
    getline(fin, junk);

    string first_date, last_date;
    cout << "Enter earlier date: ";
    cin >> first_date;
    cout << "Enter later date: ";
    cin >> last_date;

    string date;
    // Compare date and first_date until they're the same
    do {
        fin >> date;
        getline(fin, junk);
    }
    while (date.compare(first_date) != 0);

    int length = 1;
    do {
        fin >> date;
        getline(fin, junk);

        length++;
    }
    while (date.compare(last_date) != 0);

    // Clear file to read again
    fin.clear();
    fin.seekg(0, fin.beg);

    // Get rid of the first header line
    getline(fin, junk);

    const int SIZE = length;
    string dates[SIZE];
    double elevs[SIZE];

    while (dates[0].compare(first_date) != 0) {
        fin >> dates[0] >> junk >> junk >> junk >> elevs[0];
    }

    for (int i = 1; i < length; i++) {
        fin >> dates[i] >> junk >> junk >> junk >> elevs[i];
    }

    for (int i = SIZE - 1; i >= 0; i--) {
        cout << dates[i] << " " << elevs[i] << " ft\n";
    }

    fin.close();

    return 0;
}