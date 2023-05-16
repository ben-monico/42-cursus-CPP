/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:28:54 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 01:49:51 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	this->type = "Unknown";
	std::cout << "[Cat Default constructor " << this->type << "]" << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(std::string name) : AAnimal(name)
{
	this->type = name;
	std::cout << "[Cat Parameterized constructor " << this->type << "]" << std::endl;
	this->_brain = new Brain;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "[Cat Default destructor " << this->type << "]" << std::endl;
}

Cat::Cat(Cat const &C) : AAnimal(type)
{
	this->type = C.type;
	std::cout << "[Cat Copy Constructor " << this->type << "]" << std::endl;
}

Cat &Cat::operator =(Cat const &C)
{
	this->type = C.type;
	std::cout << "[Cat AO called " << this->type << "]" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": Meow Meow Mudifuka" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}