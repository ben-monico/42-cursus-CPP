/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:38:24 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/31 02:08:24 by bcarreir         ###   ########.fr       */
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
	
		float toFloat(void) const;
		int toInt(void) const;
		Fixed(const int i);
		Fixed(const float f);
		
	private:
		int _fixedpoint;
		const static int _fract = 8;
		
};

std::ostream &operator <<(std::ostream &out, const Fixed &obj);

#endif