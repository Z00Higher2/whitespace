// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 7A
// Write a program unindent.cpp that reads input from cin and prints out each input line with leading spaces removed.

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

// Function to remove leading spaces from a given string
string removeLeadingSpaces(string line) {
    // Find the position of the first non-whitespace character using isspace
    int firstNonSpacePos = 0;
    while (isspace(line[firstNonSpacePos])){
        firstNonSpacePos++;
    }

    // Use substr to create a substring starting from the first non-whitespace character to the end
    return line.substr(firstNonSpacePos);
}

int main() {
    // Get input string from the user
    string lines;
    while(getline(cin, lines)){
        cout << removeLeadingSpaces(lines) << endl;

    };


    return 0;
}
