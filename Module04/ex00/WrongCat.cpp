/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:28:54 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:55:45 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "Unknown";
	std::cout << "[WrongCat Default constructor " << this->type << "]" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	this->type = name;
	std::cout << "[WrongCat Parameterized constructor " << this->type << "]" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[WrongCat Default destructor " << this->type << "]" << std::endl;
}

WrongCat::WrongCat(WrongCat const &C) : WrongAnimal(type)
{
	this->type = C.type;
	std::cout << "[WrongCat Copy Constructor " << this->type << "]" << std::endl;
}

WrongCat &WrongCat::operator =(WrongCat const &C)
{
	this->type = C.type;
	std::cout << "[WrongCat AO called " << this->type << "]" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WRONG MEOW MEOW" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}