/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab3C

User inputs beginning date and ending date.
Whether the elevation of the East or West was higher or if it was equal is printed.
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

    string start_date;
    cout << "Enter starting date: " << endl;
    cin >> start_date;

    string end_date;
    cout << "Enter ending date: " << endl;
    cin >> end_date;

    string date;
    double east_elev = 0.0;
    double west_elev = 0.0;
    
    // If date is in range, compare east and west elevation and print
    while (fin >> date) {
        if (date.compare(start_date) >= 0 && date.compare(end_date) <= 0) {
            fin >> junk >> east_elev >> junk >> west_elev;
            if (east_elev > west_elev) {
                cout << date << " East" << endl;
            } else 
            if (west_elev > east_elev) {
                cout << date << " West" << endl;
            } else {
                cout << date << " Equal" << endl;
            }
        } else {
            getline(fin, junk);
        }
    }

    fin.close();

    return 0;
}