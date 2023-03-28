/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 02:12:08 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/28 03:14:52 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string weapon)
{
	Weapon::setType(weapon);
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	if (type == "crude spiked club" || type == "some other type of club")
		this->type = type;
}

const std::string& Weapon::getType()
{
	return this->type;
}
