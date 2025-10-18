#include <iostream>
#include "point.h"
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ukr");
    Point a, b, c;

    // Ініціалізація та виведення першої точки
    a = a.Init(2, 4);
    cout << "Точка a: ";
    a.Display();
    cout << "Відстань від початку координат: " << a.distance() << endl;
    cout << endl;

    // Введення другої точки з клавіатури
    cout << "Введіть другу точку:" << endl;
    b.Read();
    cout << "Точка b: ";
    b.Display();
    cout << "Відстань від початку координат: " << b.distance() << endl;
    cout << endl;

    return 0;
}