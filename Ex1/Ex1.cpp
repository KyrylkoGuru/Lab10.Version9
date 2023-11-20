#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int p1, p2, g1, g2, g3, g4;
    std::cout << "Введіть тривалість життя батька:";
    std::cin >> p1;
    std::cout << "Введіть тривалість життя матері:";
    std::cin >> p2;

    // Зчитування тривалості життя старшого покоління

    std::cout << "Введіть тривалість життя першого дідуся:";
    std::cin >> g1;
    std::cout << "Введіть тривалість життя другого дідуся:";
    std::cin >> g2;
    std::cout << "Введіть тривалість життя першої бабусі:";
    std::cin >> g3;
    std::cout << "Введіть тривалість життя другої бабусі:";
    std::cin >> g4;


    int sar = (p1 + p2 + g1 + g2 + g3 + g4) / 6;
    std::cout << "Приблизна тривалість вашого життя: " << sar << " років" << std::endl;

    return 0;
}
