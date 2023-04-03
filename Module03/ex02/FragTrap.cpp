/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:22:37 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("Unknown"), ClapTrap()
{
	std::cout << "[FragTrap Default Constructor called on " << _name << "]" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
}

FragTrap::FragTrap(std::string name) : _name(name), ClapTrap(name)
{
	std::cout << "[FragTrap parameterized Constructor called on " << _name << "]" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap Destructor called on " << this->_name << "]" << std::endl;
}

FragTrap::FragTrap(FragTrap const &S) : _name(S._name)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
	std::cout << "[FragTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void FragTrap::operator=(const FragTrap &S)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
}

void FragTrap::highFivesGuys()
{
	std::cout << "\e[0;34m[FragTrap \e[0m" << this->_name << "\e[0;34m requests a positive high five before his whoop-ass delivery.\e[0m" << std::endl;
}

