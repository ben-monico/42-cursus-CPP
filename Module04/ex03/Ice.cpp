/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:17 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 01:57:18 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors
Ice::Ice()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
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
	return *this;
}

