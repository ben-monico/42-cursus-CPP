/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:02:49 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:03:43 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string _name;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &S);
	~ScavTrap();
	void operator=(const ScavTrap &c);
	void attack(const std::string& target);
	void guardGate();

};



#endif // SCAVTRAP_HPP_