/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:38:24 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 23:28:51 by bcarreir         ###   ########.fr       */
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

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
		float toFloat(void) const;
		int toInt(void) const;
		Fixed(const int i);
		Fixed(const float f);
		
		Fixed &operator=(const Fixed &assign);
		bool operator>(const Fixed &F);
		bool operator<(const Fixed &F);
		bool operator<=(const Fixed &F);
		bool operator>=(const Fixed &F);
		bool operator==(const Fixed &F);
		bool operator!=(const Fixed &F);

		Fixed operator+(const Fixed &F);
		Fixed operator-(const Fixed &F);
		Fixed operator/(const Fixed &F);
		Fixed operator*(const Fixed &F);

		
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		static Fixed &min(Fixed &A, Fixed &B);
		static const Fixed &min(const Fixed &A, const Fixed &B);
		static Fixed &max(Fixed &A, Fixed &B);
		static const Fixed &max(const Fixed &A, const Fixed &B);
		
	private:
		int _fixedpoint;
		const static int _fract;
		
};

std::ostream &operator <<(std::ostream &out, const Fixed &obj);

#endif