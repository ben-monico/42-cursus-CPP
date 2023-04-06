/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/06 18:35:02 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("Unknown") ,ClapTrap()
{
	std::cout << "[FragTrap Default Constructor called on " << _name << "]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : _name(name), ClapTrap(name)
{
	std::cout << "[FragTrap parameterized Constructor called on " << _name << "]" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap Destructor called on " << this->_name << "]" << std::endl;
}

FragTrap::FragTrap(FragTrap const &S) : _name(S._name)
{
	this->_hitPoints = (S.getHP());
	this->_energyPoints = (S.getEP());
	this->_attackDamage = (S.getAD());
	std::cout << "[FragTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void FragTrap::operator=(const FragTrap &S)
{
	this->_hitPoints = (S.getHP());
	this->_energyPoints = (S.getEP());
	this->_attackDamage = (S.getAD());
}

void FragTrap::highFivesGuys()
{
	if (!checkStats())
		return ;
	std::cout << "\e[0;34m[FragTrap \e[0m" << this->_name << "\e[0;34m requests a positive high five before his whoop-ass delivery.\e[0m" << std::endl;
}

