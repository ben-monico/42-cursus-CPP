/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:40:35 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/31 02:12:22 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedpoint(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed( const float f ) : _fixedpoint( roundf(f * (float)(1 << _fract)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedpoint = i << _fract;
}

Fixed::Fixed(const Fixed &copy) : _fixedpoint(copy.getRawBits())
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (float)(_fixedpoint / (float)(1 << _fract));
}

int Fixed::toInt(void) const
{
	return _fixedpoint >> _fract;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "\e[0;35mgetRawBits member function called\e[0m" << std::endl;
	return Fixed::_fixedpoint;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "\e[0;35msetRawBits member function called\e[0m" << std::endl;
	Fixed::_fixedpoint = raw;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	(void) assign;
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}