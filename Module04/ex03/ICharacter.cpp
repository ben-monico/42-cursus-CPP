/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:19 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 01:57:20 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

// Constructors
ICharacter::ICharacter()
{
	std::cout << "\e[0;33mDefault Constructor called of ICharacter\e[0m" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ICharacter\e[0m" << std::endl;
}


// Destructor
ICharacter::~ICharacter()
{
	std::cout << "\e[0;31mDestructor called of ICharacter\e[0m" << std::endl;
}


// Operators
ICharacter & ICharacter::operator=(const ICharacter &assign)
{
	(void) assign;
	return *this;
}

