/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:34:25 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:19:54 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Ben("Ben");
	ScavTrap Joe("Joe");
	FragTrap Sag("Sag");

	Joe.attack("Ben");
	Ben.takeDamage(1);
	Ben.attack("Joe");
	Joe.takeDamage(0);
	Ben.beRepaired(10);
	Joe.beRepaired(134);
	Joe.guardGate();

	Sag.attack("himself");
	Sag.beRepaired(18);
	Sag.highFivesGuys();
	Sag.takeDamage(49);
}