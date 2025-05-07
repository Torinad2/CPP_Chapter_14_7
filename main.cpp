/*
 **********************************************************************************************
 * Month Class                                                                                *
 * Design a class named Month.The class should have the following private members :           *
 *                                                                                            *
 *    name: A string object that holds the name of a month, such as                           *
 *    “January, ” “February, ” and so on.                                                     *
 *                                                                                            *
 *    monthNumber: An integer variable that holds the number of the month.For                 *
 *    example, January would be 1, February would be 2, and so on.                            *
 *    Valid values for this variable are 1 through 12.                                        *
 *                                                                                            *
 *    In addition, provide the following member functions :                                   *
 *                                                                                            *
 *  • A default constructor that sets monthNumber to 1 and name to “January.”                 *
 *                                                                                            *
 *  • A constructor that accepts the name of the month as an argument.It should set name      *
 *    to the value passed as the argument and set monthNumber to the correct value.           *
 *                                                                                            *
 *  • A constructor that accepts the number of the month as an argument.It should set         *
 *    monthNumber to the value passed as the argument and set name to the correct month name. *
 *                                                                                            *
 *  • Appropriate set and get functions for the name and monthNumber member variables.        *
 *                                                                                            *
 *  • Prefix and postfix overloaded++ operator functions that increment monthNumber           *
 *    and set name to the name of next month.If monthNumber is set to 12 when these           *
 *    functions execute, they should set monthNumber to 1 and name to “January.”              *
 *                                                                                            *
 *  • Prefix and postfix overloaded ?? operator functions that decrement monthNumber          *
 *    and set name to the name of previous month.If monthNumber is set to 1 when these        *
 *    functions execute, they should set monthNumber to 12 and name to “December.”            *
 *                                                                                            *
 *    Also, you should overload cout’s << operator and cin’s >> operator to work with the     *
 *    Month class.Demonstrate the class in a program.                                         *
 **********************************************************************************************
 */

#include <iostream>
#include "Month.h"
using namespace std;

int main() {
    cout << "=============================================" << endl;
    cout << "         MONTH CLASS PROGRAM                 " << endl;
    cout << "=============================================\n" << endl;

    // ********************************************************
    // * Test default constructor                             *
    // ********************************************************
    Month testDefaultConstructor;
    cout << "Default Constructor:\n";
    cout << "Result: " << testDefaultConstructor << endl;
    cout << "---------------------------------------------\n" << endl;

    // ********************************************************
    // * Test constructor with name                           *
    // ********************************************************
    Month testNamedConstructor("June");
    cout << "Named Constructor - 'June':\n";
    cout << "Result: " << testNamedConstructor << endl;
    cout << "---------------------------------------------\n" << endl;

    // ********************************************************
    // * Test constructor with number                         *
    // ********************************************************
    Month testNumberConstructor(5);
    cout << "Number Constructor - 5:\n";
    cout << "Result: " << testNumberConstructor << endl;
    cout << "---------------------------------------------\n" << endl;

    // ********************************************************
    // * Demonstrate postfix increment                        *
    // ********************************************************
    cout << "Postfix Increment:\n";
    cout << "Before Increment: " << testNumberConstructor++ << endl;
    cout << "After Increment:  " << testNumberConstructor << endl;
    cout << "---------------------------------------------\n" << endl;

    // ********************************************************
    // * Demonstrate prefix decrement                         *
    // ********************************************************
    cout << "Prefix Decrement:\n";
    cout << "Before Decrement: " << testNumberConstructor << endl;
    cout << "After Decrement: " << --testNumberConstructor << endl;
    cout << "---------------------------------------------\n" << endl;

    // ********************************************************
    // * Get user input and echo result                       *
    // ********************************************************
    Month userMonth;
    cout << "User Input:\n";
    cout << "Enter a month name: ";
    cin >> userMonth;
    cout << "You entered: " << userMonth << endl;
    cout << "=============================================" << endl;

    // ********************************************************
    // * Developer credit                                     *
    // ********************************************************
    cout << endl;
    cout << "*********************************************" << endl;
    cout << "* Developed by: Nikita Baiborodov           *" << endl;
    cout << "*********************************************" << endl;

    return 0; // Indicate successful program termination
}
