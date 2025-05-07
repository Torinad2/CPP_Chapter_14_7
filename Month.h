#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <string>
using namespace std;

/*
***************************************************************
* Month Class Declaration                                     *
* This class stores a month's name and corresponding number.  *
* It includes overloaded operators, stream support, and       *
* static member for name lookup.                              *
***************************************************************
*/

class Month {

private:

    string name;             // Name of the month
    int monthNumber;         // Number of the month

    static const string monthNames[12]; // Array holding all month names

public:

    // ********************************************************
    // * Constructors                                         *
    // ********************************************************
    Month();                          // Default: January
    Month(const string& monthName);   // From name
    Month(int number);                // From number

    // ********************************************************
    // * Setters                                              *
    // ********************************************************
    void setName(const string& monthName);     // Set month by name
    void setMonthNumber(int number);           // Set month by number

    // ********************************************************
    // * Getters                                              *
    // ********************************************************
    string getName() const;                    // Get month name
    int getMonthNumber() const;                // Get month number

    // ********************************************************
    // * Overloaded Increment/Decrement Operators             *
    // ********************************************************
    Month& operator++();        // Prefix increment
    Month operator++(int);      // Postfix increment
    Month& operator--();        // Prefix decrement
    Month operator--(int);      // Postfix decrement

    // ********************************************************
    // * Overloaded Stream Operators                          *
    // ********************************************************
    friend ostream& operator<<(ostream& out, const Month& m); // Output format
    friend istream& operator>>(istream& in, Month& m);        // Input month name
};

#endif

