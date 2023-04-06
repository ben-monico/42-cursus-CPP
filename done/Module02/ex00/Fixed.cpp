/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:40:35 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 15:24:16 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::Fixed() : _fixedpoint(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	this->setRawBits(copy.getRawBits());
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

int Fixed::getRawBits( void ) const
{
	std::cout << "\e[0;35mgetRawBits member function called\e[0m" << std::endl;
	return this->_fixedpoint;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedpoint = raw;
}
