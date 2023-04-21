/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:44:30 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/21 18:44:00 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <sstream>
#include <cmath>

bool ScalarConverter::isChar = false;
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

bool ScalarConverter::isLimit(std::string literal)
{
	if (literal == "nan" || literal == "nanf" || literal == "inf" || literal == "inff" || literal == "-inf" || literal == "-inff")
		return true;
	return false;
}

std::string ScalarConverter::convertChar(std::string literal)
{
	try
	{
		if (literal.length() == 1 && !isdigit(literal[0]))
		{
			isChar = true;
			return literal;
		}
		std::stringstream ss;
		int c = atoi(literal.c_str());
		if (c <= 31 || c >= 126)
			return "impossible";
		else
			ss << static_cast<char>(c);
		return ss.str();
	}
	catch (std::exception &e)
	{
		return "impossible";
	}
}

std::string  ScalarConverter::convertInt(std::string literal)
{
	std::stringstream ss;
	if (isChar == true)
	{
		ss << static_cast<int>(literal[0]);
		return ss.str();
	}
	try
	{
		ss << round(atof(literal.c_str()));
		return ss.str();
	}
	catch (std::exception &e)
	{
		return "impossible";
	}
}

std::string ScalarConverter::convertFloat(std::string literal)
{
	if (isChar == true)
		return "nanf";
	try
	{
		std::stringstream ss;
		ss << static_cast<float>(atof(literal.c_str()));
		if (!isLimit(literal) && literal.find('.') == std::string::npos)
			ss << ".0";
		ss << 'f';
		return ss.str();
	}
	catch (std::exception &e)
	{
		return "impossible";
	}
}


std::string ScalarConverter::convertDouble(std::string literal)
{
	if (isChar == true)
		return "nan";
	try
	{
		std::stringstream ss;
		ss << atof(literal.c_str());
		if (!isLimit(literal) && literal.find('.') == std::string::npos)
			ss << ".0";
		return ss.str();
	}
	catch (std::exception &e)
	{
		return "impossible";
	}
}

//use double limits to check if it is in range of float
void ScalarConverter::convert(std::string literal)
{
	std::cout << "char: " << convertChar(literal) << std::endl;
	std::cout << "int: " << convertInt(literal) << std::endl;
	std::cout << "float: " << convertFloat(literal) << std::endl;
	std::cout << "double: " << convertDouble(literal) << std::endl;
}
