/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 22:45:24 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/27 23:08:24 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	Zombie* zhorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zhorde[i] = Zombie(name);
		zhorde[i].announce();
	}

	return zhorde;
}