// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>

int main()
{
	int wiek;
	std::cout << "Podaj wiek";
	std::cin >> wiek;
	if (wiek >= 35)
	{
		std::cout << "Mozesz byc prezydentem";
	}
	else
		std::cout << "Nie mozesz byc prezydentem";
	
}

