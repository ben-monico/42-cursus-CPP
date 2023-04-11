/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:03:34 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 01:02:33 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <list>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		// Constructors
		Character();
		Character(std::string name);
		Character(const Character &copy);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria *_inventory[4];
		std::list <AMateria *> floor;
};

#endif