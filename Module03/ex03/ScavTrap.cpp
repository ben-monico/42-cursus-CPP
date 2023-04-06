/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/06 18:34:58 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "[ScavTrap Default Constructor called on " << _name << "]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : _name(name), ClapTrap(name)
{
	std::cout << "[ScavTrap parameterized Constructor called on " << _name << "]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap Destructor called on " << this->_name << "]" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &S) : _name(S._name)
{
	this->_hitPoints = (S.getHP());
	this->_energyPoints = (S.getEP());
	this->_attackDamage = (S.getAD());
	std::cout << "[ScavTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &S)
{
	this->_hitPoints = (S.getHP());
	this->_energyPoints = (S.getEP());
	this->_attackDamage = (S.getAD());
}


void ScavTrap::guardGate()
{
	if (!checkStats())
		return ;
	std::cout << "\e[0;35m[ScavTrap \e[0m" << this->_name << "\e[0;35m is in gateKeeper mode]\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!checkStats())
		return ;
	this->_energyPoints = getEP() - 1;
	std::cout << "\e[0;33mScavTrap \e[0m" << this->_name << "\e[0;33m slapped the living sh*t outta \e[0m" << target << " " << this->getAD() << "\e[0;33m times.\e[0m" << std::endl;
}