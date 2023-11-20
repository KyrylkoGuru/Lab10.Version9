#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    float p;
    double y, x, k;
    std::cout << "Введіть значення змінної p:";
    std::cin >> p;
    const float t = 4.1;
    p = 3;
    k = sqrt(p + pow(t, 2));
    x = p + k;
    y = pow(atan(x * x), 3);
    std::cout << "Значення функції y=F(x):" << y << std::endl;
    return 0;
}


