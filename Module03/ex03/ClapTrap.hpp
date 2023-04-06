/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:20:55 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/06 18:28:16 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

# include <iostream>

class ClapTrap
{
private:
	std::string _name;

protected:
	ClapTrap();

	int _hitPoints;
	int _energyPoints;
	int	_attackDamage;
	std::string getName() const;

	bool checkStats() const;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &C);
	~ClapTrap();
	void operator=(const ClapTrap &c);
	
	int getHP() const;
	int getEP() const;
	int getAD() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif // CLAPTRAP_HPP_
