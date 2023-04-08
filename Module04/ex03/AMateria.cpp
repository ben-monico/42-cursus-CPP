/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:14 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 02:12:30 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria() : _type("Undefined")
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "\e[0;33mParameter Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	this->_type = copy._type;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	this->_type = assign._type;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Materia: '*" << this->_type << " does something abstract at " \
	<< target.getName() << " *'" << std::endl;
}
