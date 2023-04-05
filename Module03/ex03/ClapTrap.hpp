/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:20:55 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 03:21:04 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

# include <iostream>

class ClapTrap
{
private:
	int _hitPoints;
	int _energyPoints;
	int	_attackDamage;

protected:

	std::string _name;
	bool checkStats() const;
	int getHP() const;
	int getEP() const;
	int getAD() const;
	std::string getName() const;

	void setHP(int);
	void setEP(int);
	void setAD(int);
	void setName(std::string name);

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &C);
	~ClapTrap();
	void operator=(const ClapTrap &c);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif // CLAPTRAP_HPP_
