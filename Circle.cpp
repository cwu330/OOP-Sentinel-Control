///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Excercise 3_3.  Build a Circle class
// Calvin Wu
// July 20th 2025
///////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath> 
#include "Circle.h"
using std::pow;

//Default constructor
Circle::Circle() {
    radius = 0.0;
}
//Our constructor that sets radius
Circle::Circle(double circleRadius) {
    radius = circleRadius;
}
//Get diameter by computing using radius
double Circle::GetDiameter() const {
    return 2 * radius;
}
//Get circumfrence by computing using radius
double Circle::GetCircumfrence() const {
    return 2 * pi * radius;
}
//Get area by computing using radius
double Circle::GetArea() const {
    return pi * pow(radius, 2);
}
//Setter for radius
void Circle::SetRadius(double circleRadius) {
    radius = circleRadius;
}
 