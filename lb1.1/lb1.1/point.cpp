#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point Point::Init(double x, double y)
{
    //Координати можуть бути будь-якими дійсними числами
    first = x;
    second = y;
    return *this;
}

void Point::Read()
{
    cout << "Введіть координату x: ";
    cin >> first;

    cout << "Введіть координату y: ";
    cin >> second;
}

void Point::Display()
{
    cout << "(" << first << ", " << second << ")" << endl;
}

Point Point::Add(Point other)
{
    Point tmp;
    tmp.first = this->first + other.first;
    tmp.second = this->second + other.second;
    return tmp;
}

double Point::distance()
{
    //Відстань від початку координат за формулою sqrt(x^2 + y^2)
    return sqrt(first * first + second * second);
}