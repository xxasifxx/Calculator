// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main(int argc, char *argv[])
{
	int first = 1;
	int second = 2;
	first = (int)*argv[1] - 48;
	second = (int)*argv[2] - 48;
	double inverse = 0;
	if (first != 0)
	{
	inverse = 1 / first;
	}
	double addition = first + second;
	double subtraction = first - second;
	double multiple = first * second;
	double divide = first / second;
	double sine = sin(first);
	double cosine = cos(first);
	double sineh = sinh(first);
	double coseh = cosh(first);
	double tangent = tan(first);
	double secant = 1/sine;
	double cosecant = 1/cosine;
	std::cout << "Straight Calculation" << std::endl;
	std::cout << first << "+" << second << "=" << addition << std::endl;
	std::cout << first << "-" << second << "=" << subtraction << std::endl;
	std::cout << first << "*" << second << "=" << multiple << std::endl;
	std::cout << first << "/" << second << "=" << divide<< std::endl;
	std::cout << "sin(" << first << ")" << "=" << sine << std::endl;
	std::cout << "cos(" << first << ")" << "=" << cosine << std::endl;
	std::cout << "sinh(" << first << ")" << "=" << sineh << std::endl;
	std::cout << "cosh(" << first << ")" << "=" << coseh << std::endl;
	std::cout << "tan(" << first << ")" << "=" << tangent << std::endl;
	std::cout << "sec(" << first << ")" << "=" << secant << std::endl;
	std::cout << "csc(" << first << ")" << "=" << cosecant << std::endl;
	std::cout << "(" << first << ")^-1" << "=" << inverse << std::endl;

	double arcsin = -1;
	double arccos = -1;
	double arctan = -1;
	if (first < 1 && first > -1)
	{
		arcsin = asin(first);
		arccos = acos(first);
		arctan = atan(first);
		std::cout << "arcsin(" << first << ")" << "=" << arcsin << std::endl;
		std::cout << "arccos(" << first << ")" << "=" << arccos << std::endl;
		std::cout << "arctan(" << first << ")" << "=" << arctan << std::endl;
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
