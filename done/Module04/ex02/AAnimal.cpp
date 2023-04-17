/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:58:18 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:54:32 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Unknown AAnimal")
{
	std::cout << "[AAnimal Default Constructor " << this->type << "]" << std::endl;	
}

AAnimal::AAnimal(std::string name) : type(name)
{
	std::cout << "[AAnimal Parameterized Constructor " << this->type << "]" << std::endl;	
}

AAnimal::AAnimal(AAnimal const &A)
{
	this->type = A.type;
	std::cout << "[AAnimal Copy Constructor " << this->type << "]" << std::endl;	
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal Destructor " << this->type << "]" << std::endl;	
}

AAnimal &AAnimal::operator=(AAnimal const &A)
{
	this->type = A.type;
	std::cout << "[AAnimal AO " << this->type << "]" << std::endl;	
	return *this;
}

