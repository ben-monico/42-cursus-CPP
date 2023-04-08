/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:10 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 01:58:56 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"


class Ice
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		
	private:
		
};

#endif