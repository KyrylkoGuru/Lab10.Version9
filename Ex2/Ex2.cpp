#include <iostream>
#include <Windows.h>
	
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float s;
	std::cout << "������ ���� ������:";
	std::cin >> s;
	for (int i = 1; i <= 10; i++) s = s * 1.25;
	std::cout << "���� ������ �� 25% ����� �� ������ ���� ���������:" << s << "�������" << std::endl;
	return 0;
}



