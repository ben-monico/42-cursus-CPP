/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:44:30 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/26 23:54:36 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::_c = 0;
int ScalarConverter::_i = 0;
float ScalarConverter::_f = 0;
double ScalarConverter::_d = 0;
// Constructors
ScalarConverter::ScalarConverter()
{
	std::cout << "\e[0;33mDefault Constructor called of ScalarConverter\e[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ScalarConverter\e[0m" << std::endl;
}


// Destructor
ScalarConverter::~ScalarConverter()
{
	std::cout << "\e[0;31mDestructor called of ScalarConverter\e[0m" << std::endl;
}


// Operators
ScalarConverter & ScalarConverter::operator=(const ScalarConverter &assign)
{
	(void) assign;
	return *this;
}

void ScalarConverter::convert(std::string literal)
{
	// if (literal.empty())
	// 	impossible();
	const std::string Flimits[4] = {"inff", "-inff", "+inff", "nanf"};
	const std::string Dlimits[4] = {"inf", "-inf", "+inf", "nan"};
	for (int j = 0; j < 4; j++)
	{
		if (literal == Flimits[j] || literal == Dlimits[j])
		{
			std::cout << "char: impossible\n";
			std::cout << "int: impossible\n";
			std::cout << "float: " << Flimits[j] << std::endl;
			std::cout << "double: " << Dlimits[j] << std::endl;
			return ;
		}
	}
	// std::cout << getType(literal) << std::endl;
	convertToType(getType(literal), literal);
}

std::string ScalarConverter::getType(std::string literal)
{
	if (literal.empty())
		impossible();
	int j = 0, dot = 0, minus = 0, fchar = 0, plus = 0;
	for (; literal[j]; j++)
	{
		dot += (literal[j] == '.');
		if (literal[j] == '+')
		{
			if (j == 0)	plus++; else return ("impossibr");
		}
		else if (literal[j] == '-')
		{
			if (j == 0)	minus++; else return ("impossibru");
		}
		else if (literal[j] == 'f')
		{
			if (j == (int)literal.length() - 1) fchar++; else return ("impossibro");
		}
		else if ((!isdigit(literal[j]) && literal[j] != '.') \
		|| dot > 1 || minus > 1 || fchar > 1 || plus > 1)
			return "impossible" ;
	}
	if (literal.length() == 1 && !isdigit(literal[0]))
		return "char";
	else if (!dot && !fchar && literal.length() <= 11)
	{
		int dif = 0;
		if (literal [0] == '-' && literal.length() == 11)
			dif = literal.compare("-2147483648");
		else if (isdigit(literal [0]) && literal.length() == 10)
			dif = literal.compare("2147483647");
		else if (literal [0] == '+' && literal.length() == 11)
			dif = literal.compare("+2147483647");
		if (dif <= 0) return "int";	
		else return "double";
	}
	else if (!fchar)
		return "double";
	else if (dot && fchar)
		return "float";
	return "impossibreh";
}

void ScalarConverter::convertToType(std::string type, std::string literal)
{
	if (type == "char")
		converter(literal[0]);
	else if (type == "int")
		converter(atoi(literal.c_str()));
	else if (type == "float")
		converter((strtof(literal.c_str(), NULL)));
	else if (type == "double")
		converter((strtod(literal.c_str(), NULL)));
	else
		impossible();
}

//Overriden functions
void ScalarConverter::converter(char literal)
{
	std::cout << "char: " << "'" << literal << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(literal) << std::endl;
    std::cout << "float: " << static_cast<float>(literal) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(literal) << ".0" << std::endl;
}

void ScalarConverter::converter(int literal)
{
	std::cout << "char: ";
	if (literal < 0 || literal > 255) std::cout << "impossible" << std::endl;
	else if (literal < 32 || literal > 126) std::cout << "non displayable" << std::endl;
	else std::cout << "'" << static_cast<char>(literal) << "'" << std::endl;
	
    std::cout << "int: " << static_cast<int>(literal) << std::endl;
    std::cout << "float: " << static_cast<float>(literal) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(literal) << ".0" << std::endl;
}

void ScalarConverter::converter(float literal)
{
	std::cout << "char: ";
	if (literal < 0 || literal > 255) std::cout << "impossible" << std::endl;
	else if (literal < 32 || literal > 126) std::cout << "non displayable" << std::endl;
	else std::cout << "'" << static_cast<char>(literal) << "'" << std::endl;
	
	std::cout << "int: ";
	if (literal >= -2147483648.f && literal <= 2147483647.f)
		std::cout << static_cast<int>(literal) << std::endl;
	else std::cout << "impossible" << std::endl;
	
    std::cout << "float: " << literal;
	if (literal - static_cast<long long>(literal) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	
    std::cout << "double: " << static_cast<double>(literal);
	if (literal - static_cast<long long>(literal) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::converter(double literal)
{
	std::cout << "char: ";
	if (literal < 0 || literal > 255) std::cout << "impossible" << std::endl;
	else if (literal < 32 || literal > 126) std::cout << "non displayable" << std::endl;
	else std::cout << "'" << static_cast<char>(literal) << "'" << std::endl;
	
	std::cout << "int: ";
	if (literal >= -2147483648 && literal <= 2147483647)
		std::cout << static_cast<int>(literal) << std::endl;
	else std::cout << "impossible" << std::endl;
	
    std::cout << "float: " << static_cast<float>(literal);
	if (literal - static_cast<long long>(literal) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	
    std::cout << "double: " << literal;
	if (literal - static_cast<long long>(literal) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::impossible()
{
	std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "nanf" << std::endl;
    std::cout << "double: " << "nan" << std::endl;
	exit(1);
}
