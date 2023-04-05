/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:34:25 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 03:12:07 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap Ben("Ben");
	ScavTrap Joe("Joe");
	FragTrap Sag("Sag");
	DiamondTrap Wilse("Wilse");
	
	Ben.takeDamage(1);
	Ben.attack("Joe");
	Ben.beRepaired(10);

	Joe.attack("Ben");
	Joe.takeDamage(0);
	Joe.beRepaired(134);
	Joe.guardGate();

	Sag.attack("himself");
	Sag.beRepaired(18);
	Sag.highFivesGuys();
	Sag.takeDamage(49);

	Wilse.attack("Joe");
	Wilse.takeDamage(85);
	Wilse.whoAmI();
	Wilse.beRepaired(65);
}