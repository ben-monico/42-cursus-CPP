/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 20:08:36 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/01 21:43:58 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool vert_on_edge(Point const a, Point const b, Point const c, Point point)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat(); 
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();
	float px = point.getX().toFloat();
	float py = point.getY().toFloat();

	if ((py - ay)/(by-ay) == (px - ax)/(bx-ax) ||\
	(py - by)/(cy-by) == (px - bx)/(cx-bx) || \
	(py - cy)/(ay-cy) == (px - cx)/(ax-cx))
		return true ;
	return false ;
}
const float myabs(float f)
{
	if (f < 0)
		f = -f;
	return f;
}

// we can get the area as abs((xB*yA-xA*yB)+(xC*yB-xB*yC)+(xA*yC-xC*yA))/2.
const float tri_area(Point const a, Point const b, Point const c)
{
	return myabs((b.getX().toFloat() * a.getY().toFloat() - a.getX().toFloat() * b.getY().toFloat()) + \
	(c.getX().toFloat() * b.getY().toFloat() - b.getX().toFloat() * c.getY().toFloat()) + \
	(a.getX().toFloat() * c.getY().toFloat() - c.getX().toFloat() * a.getY().toFloat())) /2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (vert_on_edge(a, b, c, point))
		return false ;
	const float triArea = tri_area(a,b,c);
	const float t1 = tri_area(point, a, b);
	const float t2 = tri_area(point,b, c);
	const float t3 = tri_area(point,a,c);
	
	if (t1 + t2 + t3 == triArea)
		return true;
	return false;
}