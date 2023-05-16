/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:40:35 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 15:32:19 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <stdio.h>

const int Fixed::_fract = 8;

Fixed::Fixed() : _fixedpoint(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed( const float f ) : _fixedpoint(roundf(f *(1 << _fract)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _fixedpoint(i << _fract)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : _fixedpoint(copy.getRawBits())
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	std::cout << "\e[0;33mCopy assignment operator called\e[0m" << std::endl;
	this->setRawBits(assign.getRawBits());
	return *this;
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
	// std::cout << "\e[0;35mgetRawBits member function called\e[0m" << std::endl;
	return Fixed::_fixedpoint;
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "\e[0;35msetRawBits member function called\e[0m" << std::endl;
	Fixed::_fixedpoint = raw;
}


std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}