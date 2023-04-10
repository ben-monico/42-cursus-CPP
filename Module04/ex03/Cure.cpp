/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:17 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/10 16:10:21 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors
Cure::Cure() : AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
	this->_type = "cure";
}


// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	this->_type = "cure";
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria *obj = new Cure;

	return obj;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
