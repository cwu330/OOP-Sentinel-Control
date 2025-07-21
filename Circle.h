///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Excercise 3_3.  Build a Circle class
// Calvin Wu
// July 20th 2025
///////////////////////////////////////////////
#include <iostream>

class Circle {
    //Our public getter meethods
    public:
        //Default constructor
        Circle();
        //Circle constructor to set our values
        Circle(double circleRadius);
         //Getter for Diamater
        double GetDiameter() const;
        //Getter for circumfrence
        double GetCircumfrence() const;
        //Getter for Area
        double GetArea() const;
        //Setter for diameter
        void SetRadius(double circleRadius);
    //Our private data members
    private:
        double radius; //Our radius 
        double pi =  3.14159; //Our PI
};