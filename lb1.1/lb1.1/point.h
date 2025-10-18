#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

struct Point
{
private:
    double first, second; // координати x та y

public:
    // Ініціалізація з контролем коректності
    Point Init(double x, double y);

    // Введення з клавіатури
    void Read();

    // Виведення на екран
    void Display();

    // Додавання точок
    Point Add(Point other);

    // Відстань від початку координат
    double distance();
};

#endif