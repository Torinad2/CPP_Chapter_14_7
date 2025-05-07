#include "Month.h"

// ************************************************************
// * Initialize static array of month names                   *
// ************************************************************
const string Month::monthNames[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

// ************************************************************
// * Default Constructor - January                            *
// ************************************************************
Month::Month() {
    monthNumber = 1;
    name = "January";
}

// ************************************************************
// * Constructor - Accepts month name                         *
// ************************************************************
Month::Month(const string& monthName) {
    setName(monthName);
}

// ************************************************************
// * Constructor - Accepts month number                       *
// ************************************************************
Month::Month(int number) {
    setMonthNumber(number);
}

// ************************************************************
// * Sets month name and calculates corresponding number      *
// * Default is January                                       *
// ************************************************************
void Month::setName(const string& monthName) {
    for (int i = 0; i < 12; i++) {
        if (monthNames[i] == monthName) {
            name = monthName;
            monthNumber = i + 1;
            return;
        }
    }
    name = "January";
    monthNumber = 1;
}

// ************************************************************
// * Sets month number and updates name                       *
// * Default is January                                       *
// ************************************************************
void Month::setMonthNumber(int number) {
    if (number >= 1 && number <= 12) {
        monthNumber = number;
        name = monthNames[number - 1];
    }
    else {
        monthNumber = 1;
        name = "January";
    }
}

// ************************************************************
// * Get month name                                           *
// ************************************************************
string Month::getName() const {
    return name;
}

// ************************************************************
// * Get month number                                         *
// ************************************************************
int Month::getMonthNumber() const {
    return monthNumber;
}

// ************************************************************
// * Prefix increment (wraps around from December to January) *
// ************************************************************
Month& Month::operator++() {
    monthNumber = (monthNumber % 12) + 1;
    name = monthNames[monthNumber - 1];
    return *this;
}

// ************************************************************
// * Postfix increment (same logic, returns original)         *
// ************************************************************
Month Month::operator++(int) {
    Month temp = *this;
    ++(*this);
    return temp;
}

// ************************************************************
// * Prefix decrement (wraps around from January to December) *
// ************************************************************
Month& Month::operator--() {
    monthNumber = (monthNumber == 1) ? 12 : monthNumber - 1;
    name = monthNames[monthNumber - 1];
    return *this;
}

// ************************************************************
// * Postfix decrement (same logic, returns original)         *
// ************************************************************
Month Month::operator--(int) {
    Month temp = *this;
    --(*this);
    return temp;
}

// ************************************************************
// * Output operator overload                                 *
// ************************************************************
ostream& operator<<(ostream& out, const Month& m) {
    out << m.name << " is " << m.monthNumber << " month";
    return out;
}

// ************************************************************
// * Input operator overload (expects a valid month name)     *
// ************************************************************
istream& operator>>(istream& in, Month& m) {
    string input;
    in >> input;
    m.setName(input);
    return in;
}
