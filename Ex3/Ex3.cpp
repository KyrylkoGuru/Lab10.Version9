#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double alpha, beta;

    std::cout << "¬вед≥ть значенн€ кута alpha в градусах: ";
    std::cin >> alpha;
    std::cout << "¬вед≥ть значенн€ кута beta в градусах: ";
    std::cin >> beta;

    double z1 = pow(cos(alpha) - cos(beta), 2) - pow(sin(alpha) - sin(beta), 2);

    double z2 = -4 * pow(sin(alpha - beta / 2.0), 2) * cos((alpha + beta) / 2.0);

    std::cout << "–езультат за першою формулою (z1): " << z1 << std::endl;
    std::cout << "–езультат за другою формулою (z2): " << z2 << std::endl;

    return 0;
}