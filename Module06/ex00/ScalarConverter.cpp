/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:44:30 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/19 01:45:00 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>

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

std::string ScalarConverter::convertInt(std::string literal)
{

}

std::string ScalarConverter::convertFloat(std::string literal)
{

}

std::string ScalarConverter::convertChar(std::string literal)
{

}

std::string ScalarConverter::convertDouble(std::string literal)
{

}

//use double limits to check if it is in range of float
void ScalarConverter::convert(std::string literal)
{
	std::cout << "char: " << convertChar(literal) << std::endl;
	std::cout << "int: " << convertInt(literal) << std::endl;
	std::cout << "float: " << convertFloat(literal) << std::endl;
	std::cout << "double: " << convertDouble(literal) << std::endl;
}
