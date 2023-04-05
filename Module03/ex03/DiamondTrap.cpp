/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 03:46:42 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Unknown"), ClapTrap("Unknown_clap_name"), ScavTrap(), FragTrap()
{
	FragTrap::setHP(FragTrap::getHP());
	ScavTrap::setEP(ScavTrap::getEP());
	FragTrap::setAD(FragTrap::getAD());
	std::cout << "[DiamondTrap Default Constructor called on " << _name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : _name(_name), ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	std::cout << "[DiamondTrap parameterized Constructor called on " << _name << "]" << std::endl;
	FragTrap::setHP(FragTrap::getHP());
	ScavTrap::setEP(ScavTrap::getEP());
	FragTrap::setAD(FragTrap::getAD());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap Destructor called on " << this->_name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &S) : _name(S._name)
{
	this->FragTrap::setHP(S.FragTrap::getHP());
	this->ScavTrap::setEP(S.ScavTrap::getEP());
	this->FragTrap::setAD(S.FragTrap::getAD());
	std::cout << "[DiamondTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &S)
{
	this->FragTrap::setHP(S.FragTrap::getHP());
	this->ScavTrap::setEP(S.ScavTrap::getEP());
	this->FragTrap::setAD(S.FragTrap::getAD());
}

void DiamondTrap::attack(const std::string& target)
{
	// if (!ScavTrap::checkStats())
	// 	return ;
	// this->ScavTrap::setEP(ScavTrap::getEP() - 1);
	// std::cout << "\e[0;33mScavTrap \e[0m" << this->_name << "\e[0;33m slapped the living sh*t outta \e[0m" << target << " " << this->FragTrap::getAD() << "\e[0;33m times.\e[0m" << std::endl;
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "[I am " << this->_name << " and " << this->_name << "." << std::endl;
}