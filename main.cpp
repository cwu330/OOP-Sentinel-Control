///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Excercise 3_3.  Build a Circle class
// Calvin Wu
// July 20th 2025
///////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
     // Welcome message for HW1!!
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Welcome to my Excercise 3_3 for CIS554!" << endl;
    cout << "This program asks a user to enter a radius and then computes the " << endl;
    cout << "diameter, circumfrence, and the area of the circle" << endl;
    cout << "The program will continue to prompt the user unitl they enter a radius less than 0" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    Circle circle;
    double circleRadius;
    cout << "Lets get the radius of your circle shall we?" << endl;
    cout << "NOTE TO EXIT THE PROGRAM ENTER A NUMBER LESS THAN 0 FOR THE RADIUS!" << endl;
    //While the user has not entered a number less than 0 continue to ask user for circle radius
    //and compute the diameter, circumfrence, and area
    while (circleRadius >= 0) {
        //Prompt the user to enter a radius
        cout << "Enter your circles radius: ";
        cin >> circleRadius;
        circle.SetRadius(circleRadius);
        //Print the computed results of the circle
        cout << setprecision(2) << fixed;
        cout << "Your Circles diameter is: " << circle.GetDiameter() << endl;

        cout << setprecision(2) << fixed;
        cout << "Your Circles circumfrence is: " << circle.GetCircumfrence() << endl;

        cout << setprecision(2) << fixed;
        cout << "and your circles area is " << circle.GetArea() << endl;
    }

    //Thank the user
    cout << "Thanks for utilizing this program to find out more about your cicle dimensions (:";
}

