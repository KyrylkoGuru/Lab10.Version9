#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int p1, p2, g1, g2, g3, g4;
    std::cout << "������ ��������� ����� ������:";
    std::cin >> p1;
    std::cout << "������ ��������� ����� �����:";
    std::cin >> p2;

    // ���������� ��������� ����� �������� ��������

    std::cout << "������ ��������� ����� ������� �����:";
    std::cin >> g1;
    std::cout << "������ ��������� ����� ������� �����:";
    std::cin >> g2;
    std::cout << "������ ��������� ����� ����� �����:";
    std::cin >> g3;
    std::cout << "������ ��������� ����� ����� �����:";
    std::cin >> g4;


    int sar = (p1 + p2 + g1 + g2 + g3 + g4) / 6;
    std::cout << "��������� ��������� ������ �����: " << sar << " ����" << std::endl;

    return 0;
}
