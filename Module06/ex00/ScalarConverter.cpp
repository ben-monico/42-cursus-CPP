/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:44:30 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/24 19:34:46 by bcarreir         ###   ########.fr       */
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

void ScalarConverter::converter(char literal)
{
	_i = static_cast<int>(literal);
	_f = static_cast<float>(literal);
	_d = static_cast<double>(literal);
}

void ScalarConverter::converter(int literal)
{
	if (literal >= 0 && literal <= 255)
		_c = static_cast<char>(literal);
	_f = static_cast<float>(literal);
	_d = static_cast<double>(literal);
}

void ScalarConverter::converter(float literal)
{
	if (literal >= 0 && literal <= 255)
		_c = static_cast<char>(literal);
	if (literal >= -2147483648 && literal <= 2147483647)
		_i = static_cast<int>(literal);
	_d = static_cast<double>(literal);
}

void ScalarConverter::converter(double literal)
{
	if (literal >= 0 && literal <= 255)
		_c = static_cast<char>(literal);
	if (literal >= -2147483648 && literal <= 2147483647)
		_i = static_cast<int>(literal);
	_f = static_cast<float>(literal);
}

std::string ScalarConverter::getType(std::string literal)
{
	if (literal == "nanf" || literal == "inff" || literal == "-inff" || literal == "+inff")
		return "float";
	if (literal == "nan" || literal == "inf" || literal == "-inf" || literal == "+inf")
		return "double";
	if (literal.find_first_not_of("+0123456789") == std::string::npos && \
	literal[0] == '+' && literal.length() > 1)
		literal.erase(0, 1);
	while (literal[0] == '0' && literal.length() > 1)
		literal.erase(0, 1);
	if ((literal.find('+') != std::string::npos && literal.length() > 1) || (literal.find('-') != std::string::npos && literal[0] != '-') )
		return "impossibles";
	if (literal.length() == 1 && !isdigit(literal[0]))
		return "char";
	int j = 0, dot = 0, minus = 0, fchar = 0;
	for (; literal[j]; j++)
	{
		dot += (literal[j] == '.');
		minus += (literal[j] == '-');
		fchar += (literal[j] == 'f');
		if (!isdigit(literal[j]) && literal[j] != '.' && literal[j] != 'f' && literal[j] != '-')
			return "impossibru" ;
	}
	if (minus <=1 && !dot && !fchar)
	{
		std::string imin = "-2147483648";
		std::string imax = "2147483647";
		
		if ((literal[0] != '-' && literal.length() == imax.length()) || \
		(literal[0] == '-' && literal.length() > imin.length()))
			return "double";
		if ((literal[0] == '-' && literal.length() == imin.length()) || \
		(literal[0] != '-' && literal.length() == imax.length()))
		{
			for (int i = 0;  literal[i]; i++)
			{
				if (isdigit(literal[0] && literal[i] > imin[i]))
					return "double";
				else if (isdigit(literal[0]) && literal[i] < imin[i])
					break;
				else if (literal[0] == '-' && literal[i] > imin[i])
					return "double";
				else if (literal[0] == '-' && literal[i] < imin[i])
					break;
			}
		}
		return "int";
	}
	if (minus <= 1 && fchar == 1 && literal[literal.length() -1] == 'f' && \
	dot == 1 && literal[literal.length() - 2] != '.')
		return "float";
	if (minus <= 1 && fchar == 0 && dot == 1 && \
	literal[literal.length() - 1] != '.')
		return "double";
	return "impossiblez";
}


void ScalarConverter::convertToType(std::string type, std::string literal)
{
	std::cout <<  "type = "	<< type << std::endl;
	if (type == "char")
	{
		_c = literal[0];
		converter(_c);
	}
	else if (type == "int")
	{
		_i = atoi(literal.c_str());
		std::cout << _i << std::endl;
		converter(_i);
	}
	else if (type == "float")
	{
		_f = static_cast<float>(atof(literal.c_str()));
		converter(_f);
	}
	else if (type == "double")
	{
		_d = atof(literal.c_str());
		converter(_d);
	}
	else
		impossible();
}

void ScalarConverter::impossible()
{
	std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
	exit(1);
}

void ScalarConverter::convert(std::string literal)
{
	if (literal.empty())
		impossible();
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
	std::string type = getType(literal);
	convertToType(type, literal);
	std::cout << "char: ";
	if ((_d >= 0 &&_d < 32) || (_d > 126 && _d <= 255))
		std::cout << "Non displayable" << std::endl;
	else if (_d >= 32 && _d <= 126)
		std::cout << "'" << _c << "'" << std::endl;
	else 
		std::cout << "impossible" << std::endl;
	
    std::cout << "int: ";
	if (_d >= -2147483648 && _d <= 2147483647)
		std::cout << _i << std::endl;
	else
		std::cout << "impossible" << std::endl;
		
    std::cout << "float: " << _f;
	if (type == "int" || type == "char")
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
		
    std::cout << "double: " << _d;
	if (type == "int" || type == "char")
		std::cout << ".0";
	std::cout << std::endl;
}
