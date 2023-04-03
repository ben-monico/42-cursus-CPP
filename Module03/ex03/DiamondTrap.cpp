/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:36:24 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Unknown"), ClapTrap()
{
	std::cout << "[DiamondTrap Default Constructor called on " << _name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name)
{
	std::cout << "[DiamondTrap parameterized Constructor called on " << _name << "]" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap Destructor called on " << this->_name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &S) : _name(S._name)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
	std::cout << "[DiamondTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &S)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
}

void DiamondTrap::highFivesGuys()
{
	std::cout << "\e[0;34m[DiamondTrap \e[0m" << this->_name << "\e[0;34m requests a positive high five before his whoop-ass delivery.\e[0m" << std::endl;
}

