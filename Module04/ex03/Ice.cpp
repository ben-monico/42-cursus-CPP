/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:17 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/10 16:10:30 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors
Ice::Ice() : AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
	this->_type = "ice";
}


// Destructor
Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}


// Operators
Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	this->_type = "ice";
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria *obj = new Ice;

	return obj;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
