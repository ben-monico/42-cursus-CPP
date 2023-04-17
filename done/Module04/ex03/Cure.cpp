/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:17 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 17:47:02 by bcarreir         ###   ########.fr       */
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
	this->_type = "cure";
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
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
	return *this;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
