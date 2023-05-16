/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:13 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 17:45:31 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
	
	public:
		virtual ~AMateria();
		AMateria & operator=(const AMateria &assign);
		
		std::string const & getType() const; //Returns the materia type	
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const = 0;	
};

#endif