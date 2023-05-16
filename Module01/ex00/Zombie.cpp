/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:06:05 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/27 22:41:27 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	Zombie::_name = name;
	// std::cout << "[" << Zombie::_name << " constructed]" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "[" << Zombie::_name << " destructed]" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}