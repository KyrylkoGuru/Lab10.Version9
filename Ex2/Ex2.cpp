#include <iostream>
#include <Windows.h>
	
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float s;
	std::cout << "¬вед≥ть суму вкладу:";
	std::cin >> s;
	for (int i = 1; i <= 10; i++) s = s * 1.25;
	std::cout << "—ума вкладу п≥д 25% р≥чних за дес€ть рок≥в становить:" << s << "гривень" << std::endl;
	return 0;
}



