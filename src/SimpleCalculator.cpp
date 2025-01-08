#include <iostream>
#include <iomanip>
#include <sstream>
#include "SimpleCalculator.h"
using namespace std;

//Calculator 1: Area of a circle
double calculateCircleArea() {
    //TODO: create a variable of type double named "r"
    //      create a constant double variable named pi and set it equal to 3.1415926535
asdfasdf
    //TODO: prompt the user to enter the radius, r

    //TODO: calculate the area. PI * R^2

    //TODO: display the area. Use setprecision() to set the output to 10 digits
    //      Be sure to use fixed to ensure the same number of digits following the
    //      decimal point

    return area;
}

//Calculator 2: Fraction addition
string addFractions() {
    //TODO: create variables for each numerator, denominator, and slash (to represent /)

    cout << "First fraction (a/b): ";

    //TODO: prompt the user to enter the first fraction

    cout << "Second fraction (c/d): ";

    //TODO: prompt the user to enter the second fraction

    //TODO: add the fractions by using the formula defined in the pdf
    
    //TODO: display the the solution. Remember to include the slash!

    return to_string(finalNum) + "/" + to_string(finalDenom);
}

//Calculator 3: Quadratic formula
string solveQuadraticFormula() {
    //TODO: Set variables for a, b, and c

    cout << "Enter coefficient 1: ";
    cin >> a;
    cout << "Enter coefficient 2: ";
    cin >> b;
    cout << "Enter coefficient 3: ";
    cin >> c;

    //TODO: Calculate the quadratic formula. Remember to
    //      include both the positive and negative values. Make the variables doubles
    double PositiveSolution = 
    double negativeSolution = 

    //TODO: display the results

    return to_string(PositiveSolution) + ", " + to_string(negativeSolution);
}

#ifndef TESTING
int main() {
    calculateCircleArea();
    addFractions();
    solveQuadraticFormula();
    return 0;
}
#endif
