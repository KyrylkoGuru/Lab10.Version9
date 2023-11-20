
#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x1, x2, x3, y1, y2, y3;
    std::cout << "Введіть координати точки A:";
    std::cin >> x1 >> y1;
    std::cout << "Введіть координати точки B:";
    std::cin >> x2 >> y2;
    std::cout << "Введіть координати точки C:";
    std::cin >> x3 >> y3;
    double a, b, c, ha, r, p, s;
    a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    p = (a + b + c)/2;
    s = sqrt(p * (p - a)*(p-b)*(p-c));
    ha = 2 * s/a;
    r = sqrt(((p - a) * (p - b) * (p - c))/p);
    std::cout << "Висота трикутника до сторони а:" << ha << std::endl;
    std::cout << "Радіус вписаного кола в трикутник:" << r;
    return 0;
}