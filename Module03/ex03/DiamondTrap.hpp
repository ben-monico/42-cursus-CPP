/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:23:56 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:35:34 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP_
# define DIAMONDTRAP_HPP_

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ClapTrap, public ScavTrap, public FragTrap
{
private:
	std::string _name;
	ClapTrap::_name;
	
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &D);
	~DiamondTrap();
	void operator=(DiamondTrap const &D);
	ScavTrap::attack();
};


#endif // DIAMONDTRAP_HPP_