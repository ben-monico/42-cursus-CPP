/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:04:00 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/27 22:43:04 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main (void)
{
	Zombie *nozob = newZombie("Nozob");
	nozob->announce();
	randomChump("Nozobese");
	delete nozob;
}
