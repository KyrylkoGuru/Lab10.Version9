#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x, y, res;
    std::cout << "������ �������� ������ x �� y:";
    std::cin >> x >> y;
   
    if (x > 0)
    {
        res = sqrt((cos(x) - cos(y)) * sin(pow(x - y / (2 * y), 2)));
        std::cout << res << std::endl;
    }
    else
    {
        std::cout << "������� ���������� �������� �. ������� ���������� - �� ���� �����" << std::endl;
    }
    return 0;
}

