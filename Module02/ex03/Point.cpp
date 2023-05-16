/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:17:21 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/01 21:10:29 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float fx, const float fy) : x(fx), y(fy)
{
}

Point &Point::operator=(const Point& P)
{
	Point(P.x.toFloat(), P.y.toFloat());	
	return *this;
}
Point::~Point()
{
}

Fixed Point::getX() const
{
	return x;
}
Fixed Point::getY() const
{
	return y;
}
