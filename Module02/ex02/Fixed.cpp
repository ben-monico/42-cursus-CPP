/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:40:35 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 23:25:44 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <stdio.h>

const int Fixed::_fract = 8;

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed( const float f ) : _fixedpoint(roundf(f *(1 << _fract)))
{
}

Fixed::Fixed(const int i) : _fixedpoint(i << _fract)
{
}

Fixed::Fixed(const Fixed &copy) : _fixedpoint(copy.getRawBits())
{
}

Fixed::~Fixed()
{
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
	return Fixed::_fixedpoint;
}

void Fixed::setRawBits( int const raw )
{
	Fixed::_fixedpoint = raw;
}

Fixed &Fixed::operator=(const Fixed &assign)
{
	this->setRawBits(assign.getRawBits());
	return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &F)
{
	if (this->getRawBits() > F.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &F)
{
	if (this->getRawBits() < F.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &F)
{
	if (this->getRawBits() <= F.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &F)
{
	if (this->getRawBits() >= F.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &F)
{
	if (this->getRawBits() == F.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &F)
{
	if (this->getRawBits() != F.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &F)
{
	return this->toFloat() + F.toFloat();
}

Fixed Fixed::operator-(const Fixed &F)
{
	return this->toFloat() - F.toFloat();
}

Fixed Fixed::operator/(const Fixed &F)
{
	return this->toFloat() / F.toFloat();
}

Fixed Fixed::operator*(const Fixed &F)
{
	return this->toFloat() * F.toFloat();
}
	
Fixed Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	float aux = this->toFloat();
	setRawBits(getRawBits() + 1);
	return Fixed(aux);
}

Fixed Fixed::operator--()
{
	setRawBits(getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	float aux = this->toFloat();
	setRawBits(getRawBits() - 1);
	return Fixed(aux);
}

Fixed& Fixed::min(Fixed &A, Fixed &B)
{
	if (A.toFloat() < B.toFloat())
		return A;
	return B;
}

const Fixed& Fixed::min(const Fixed &A, const Fixed &B)
{
	if (A.toFloat() < B.toFloat())
		return A;
	return B;
}

Fixed& Fixed::max(Fixed &A, Fixed &B)
{
	if (A.toFloat() > B.toFloat())
		return A;
	return B;
}

const Fixed& Fixed::max(const Fixed &A, const Fixed &B)
{
	if (A.toFloat() > B.toFloat())
		return A;
	return B;
}
