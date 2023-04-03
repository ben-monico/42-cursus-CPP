/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:18:57 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:08:41 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap Default Constructor called on " << _name << "]" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap Parameterized Constructor called on " << _name << "]" << std::endl;

}

ClapTrap::ClapTrap(ClapTrap const &C) : _name(C._name), _hitPoints(C._hitPoints), _energyPoints(C._energyPoints), _attackDamage(C._attackDamage)
{
	std::cout << "[ClapTrap Copy Constructor called on " << _name << "]" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap Destructor called on " << _name << "]" << std::endl;
}

void ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c._name;
	this->_hitPoints = c._hitPoints;
	this->_energyPoints = c._energyPoints;
	this->_attackDamage = c._attackDamage;
	std::cout << "ClapTrap " << this->_name << " called copy assigment operator\n";
}

bool ClapTrap::checkStats() const
{
	if (!this->_energyPoints)
	{
		std::cout << "[" << this->_name << " has no energy to perform this action]" << std::endl;
		return false;
	}
	if (!this->_hitPoints)
	{
		std::cout << "\e[0;31m[\e[0m" << this->_name << "\e[0;31m is dead bruv]\e[0m" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string& target)
{
	if (!checkStats())
		return ;
	this->_energyPoints--;
	std::cout << "\e[0;33m[ClapTrap \e[0m" << this->_name << "\e[0;33m slapped the living sh*t outta \e[0m" << target << " " << this->_attackDamage << "\e[0;33m times.\e[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!checkStats())
		return ;
	this->_hitPoints -= amount;
	if (_hitPoints < 0) _hitPoints = 0;
	std::cout << "\e[0;31m[ClapTrap \e[0m" << this->_name << "\e[0;31m took \e[0m" << amount << "\e[0;31m roundhouse kicks. Total HP: \e[0m" << this->_hitPoints << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!checkStats())
		return ;
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "\e[0;32m[ClapTrap \e[0m" << this->_name << "\e[0;32m repaired himself for \e[0m" << amount << "\e[0;32m. Total HP: \e[0m" << this->_hitPoints << std::endl;	
}

int ClapTrap::getHP() const{ return _hitPoints; };

int ClapTrap::getEP() const{ return _energyPoints; };

int ClapTrap::getAD() const{ return _attackDamage; };

void ClapTrap::setHP(int HP){ _hitPoints = HP; };

void ClapTrap::setEP(int EP){ _energyPoints = EP; };

void ClapTrap::setAD(int AD){ _attackDamage = AD; };