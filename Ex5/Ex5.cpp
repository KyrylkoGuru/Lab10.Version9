#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double x, y, res1, res2;
    std::cout << "������ �������� ������ x �� y:";
    std::cin >> x >> y;
    res1 = (cos(x) - cos(y)) * sin(pow(x - y / (2*y), 2));
    if (res1 < 0)
    {
        std::cout << "����� �� �� ������, ������� ���� �� ������ ������ ����������";
    }
    else
    {
        res2 = sqrt(res1);
        std::cout << res2 << std::endl;
    }
    return 0;
}

