/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:13 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 02:11:32 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class ICharacter
{
	public:

		// Constructors
		ICharacter();
		ICharacter(const ICharacter &copy);
		
		// Destructor
		virtual ~ICharacter();
		
		// Operators
		ICharacter & operator=(const ICharacter &assign);
		
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		
	private:
		
};

class AMateria
{
	protected:
		std::string _type;
		AMateria();
	
	public:
		// Constructors
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		AMateria & operator=(const AMateria &assign);
		std::string const & getType() const; //Returns the materia type	
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const = 0;		
};

#endif