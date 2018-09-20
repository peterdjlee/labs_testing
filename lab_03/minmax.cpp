/*
Author: Dong-Jun Lee
Course: CSCI-133
Instructor: Michael Zamansky
Assignment: Lab3B

The minimum and maximum storage in east basin in 2016 is printed.
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

    string date;
    double east_storage = 0.0;
    double min_east_storage = 0.0;
    double max_east_storage = 0.0;

    // Set first storage level as the minimum storage, not 0.0
    fin >> date;
    fin >> min_east_storage;
    getline(fin, junk);

    while (fin >> date) {
        fin >> east_storage;

        if (east_storage < min_east_storage) {
            min_east_storage = east_storage;
        }
        if (east_storage > max_east_storage) {
            max_east_storage = east_storage;
        }

        getline(fin, junk);
    }

    cout << "Minimum storage in east basin: " << min_east_storage << endl;
    cout << "Maximum storage in east basin: " << max_east_storage << endl;

    fin.close();

    return 0;
}