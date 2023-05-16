/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:34:25 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 16:08:22 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Ben("Ben");
	std::string target = "Joe";
	Ben.attack(target);
	Ben.attack(target);
	Ben.takeDamage(7);
	Ben.attack(target);
	Ben.beRepaired(14);
	Ben.takeDamage(25);
	Ben.attack(target);
	Ben.attack(target);
	Ben.beRepaired(36);
	Ben.takeDamage(57);
}