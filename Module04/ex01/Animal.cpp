/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:58:18 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:54:32 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Unknown Animal")
{
	std::cout << "[Animal Default Constructor " << this->type << "]" << std::endl;	
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "[Animal Parameterized Constructor " << this->type << "]" << std::endl;	
}

Animal::Animal(Animal const &A)
{
	this->type = A.type;
	std::cout << "[Animal Copy Constructor " << this->type << "]" << std::endl;	
}

Animal::~Animal()
{
	std::cout << "[Animal Destructor " << this->type << "]" << std::endl;	
}

Animal &Animal::operator=(Animal const &A)
{
	this->type = A.type;
	std::cout << "[Animal AO " << this->type << "]" << std::endl;	
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sounds" << std::endl;	
}

std::string Animal::getType() const
{
	return this->type;
}
