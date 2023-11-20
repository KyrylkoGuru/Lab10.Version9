#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x, y, res;
    std::cout << "¬вед≥ть значенн€ зм≥нних x та y:";
    std::cin >> x >> y;
   
    if (x > 0)
    {
        res = sqrt((cos(x) - cos(y)) * sin(pow(x - y / (2 * y), 2)));
        std::cout << res << std::endl;
    }
    else
    {
        std::cout << "¬ведено некоректне значенн€ х. ќбласть визначенн€ - вс≥ д≥йсн≥ числа" << std::endl;
    }
    return 0;
}

