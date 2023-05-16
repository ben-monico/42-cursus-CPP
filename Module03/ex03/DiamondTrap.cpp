/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:23 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/06 18:34:51 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Unknown"), ScavTrap(), FragTrap()
{
	std::cout << "[DiamondTrap Default Constructor called on " << _name << "]" << std::endl;

}

DiamondTrap::DiamondTrap(std::string _name) : _name(_name), ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	ScavTrap S;
	std::cout << "[DiamondTrap parameterized Constructor called on " << _name << "]" << std::endl;
	this->_energyPoints = S.getEP();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap Destructor called on " << this->_name << "]" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &S) : _name(S._name), ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
	this->FragTrap::_hitPoints = (S.FragTrap::getHP());
	this->ScavTrap::_energyPoints = (S.ScavTrap::getEP());
	this->FragTrap::_attackDamage = (S.FragTrap::getAD());
	std::cout << "[DiamondTrap Copy Constructor called on " << this->_name << "]" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &S)
{
	this->FragTrap::_hitPoints = (S.FragTrap::getHP());
	this->ScavTrap::_energyPoints = (S.ScavTrap::getEP());
	this->FragTrap::_attackDamage = (S.FragTrap::getAD());
}

void DiamondTrap::whoAmI(void)
{
	if (!checkStats())
		return ;
	std::cout << "\e[0;36mDiamondTrap \e[0m" << this->_name << "\e[0;36m found out his name is what?" \
	"His name is who? His name is chka-chka \e[0m" << this->ClapTrap::getName() << "\e[0;36m.\e[0m" << std::endl;
}