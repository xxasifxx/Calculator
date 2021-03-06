﻿// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

double add(double x, double y)
{
	double z = x + y;
	return z;
}
double subtract(double x, double y)
{
	return x - y;
}
double multiply(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}
double sine(double x)
{
	double z = sin(x);
	return z;
}
double cosine(double x)
{
	double z = cos(x);
	return z;
}
double sineh(double x)
{
	if (x < -1 || x > 1)
	{
		return 0;
	}
	double z = sinh(x);
	return z;
}
double cosineh(double x)
{
	if (x < -1 || x > 1)
	{
		return 0;
	}
	double z = cosh(x);
	return z;
}
double arcsin(double x)
{
	if (x < -1 || x > 1)
	{
		return 0;
	}
	double z = asin(x);
	return z;
}
double arccos(double x)
{
	if (x < -1 || x > 1)
	{
		return 0;
	}
	double z = acos(x);
	return z;
}
double tangent(double x)
{
	double z = tan(x);
	return z;
}
double arctan(double x)
{
	if (x < -1 || x > 1)
	{
		return 0;
	}
	double z = atan(x);
	return z;
}
double exponent(double x, double y)
{
	double z = pow(x, y);
	return z;
}
int main()
{
	double input[] = { 2,3,4 };
	double inverse = 0;
	if (input[0] != 0)
	{
		inverse = 1 / input[0];
	}
	double addition = add(input[0], input[1]);
	double subtraction = input[0] - input[1];
	double multiple = input[0] * input[1];
	double divide = input[0] / input[1];
	double power = exponent(input[0], input[1]);
	double sine = sin(input[0]);
	double cosine = cos(input[0]);
	double sineh = sinh(input[0]);
	double coseh = cosh(input[0]);
	double tangent = tan(input[0]);
	double secant = 1 / sine;
	double cosecant = 1 / cosine;
	std::cout << "Straight Calculation" << std::endl;
	std::cout << input[0] << "+" << input[1] << "=" << addition << std::endl;
	std::cout << input[0] << "-" << input[1] << "=" << subtraction << std::endl;
	std::cout << input[0] << "*" << input[1] << "=" << multiple << std::endl;
	std::cout << input[0] << "/" << input[1] << "=" << divide << std::endl;
	std::cout << input[0] << "^" << input[1] << "=" << power << std::endl;
	std::cout << "sin(" << input[0] << ")" << "=" << sine << std::endl;
	std::cout << "cos(" << input[0] << ")" << "=" << cosine << std::endl;
	std::cout << "sinh(" << input[0] << ")" << "=" << sineh << std::endl;
	std::cout << "cosh(" << input[0] << ")" << "=" << coseh << std::endl;
	std::cout << "tan(" << input[0] << ")" << "=" << tangent << std::endl;
	std::cout << "sec(" << input[0] << ")" << "=" << secant << std::endl;
	std::cout << "csc(" << input[0] << ")" << "=" << cosecant << std::endl;
	std::cout << "(" << input[0] << ")^-1" << "=" << inverse << std::endl;
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
