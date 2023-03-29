/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:24:04 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/28 23:26:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	private:	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl(/* args */);
		~Harl();

		void complain( std::string level );
};

