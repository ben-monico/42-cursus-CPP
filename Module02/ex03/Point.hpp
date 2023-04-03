/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:18:08 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/01 21:10:39 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point(/* args */);
	Point(const float fx, const float fy);
	~Point();
	Point &operator=(const Point &P);
	Fixed getX() const;
	Fixed getY() const;
};


