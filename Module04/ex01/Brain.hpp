/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:02:19 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 21:02:54 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		std::string ideas[100];

	private:
		
};

#endif