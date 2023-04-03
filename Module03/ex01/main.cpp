/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:34:25 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:09:09 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Ben("Ben");
	ScavTrap Joe("Joe");
	Joe.attack("Ben");
	Ben.takeDamage(1);
	Ben.attack("Joe");
	Joe.takeDamage(0);
	Ben.beRepaired(10);
	Joe.beRepaired(134);
	Joe.guardGate();
}