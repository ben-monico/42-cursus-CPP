/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:16:56 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("Unknown"), ClapTrap()
{
	std::cout << "[ScavTrap Default Constructor called on " << _name << "]" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
}

ScavTrap::ScavTrap(std::string name) : _name(name), ClapTrap(name)
{
	std::cout << "[ScavTrap parameterized Constructor called on " << _name << "]" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap Destructor called on " << this->_name << "]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &S) : _name(S._name)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
	std::cout << "[ScavTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &S)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
}


void ScavTrap::guardGate()
{
	std::cout << "\e[0;35m[ScavTrap \e[0m" << this->_name << "\e[0;35m is in gateKeeper mode]\e[0m" << std::endl;
	
}

void ScavTrap::attack(const std::string& target)
{
	if (!checkStats())
		return ;
	this->setEP(getEP() - 1);
	std::cout << "\e[0;33mScavTrap \e[0m" << this->_name << "\e[0;33m slapped the living sh*t outta \e[0m" << target << " " << this->getAD() << "\e[0;33m times.\e[0m" << std::endl;
}