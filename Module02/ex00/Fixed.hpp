/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:38:24 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 22:55:54 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);

		~Fixed();

		Fixed & operator=(const Fixed &assign);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
	private:
		int _fixedpoint;
		static const int _fract;
		
};

#endif