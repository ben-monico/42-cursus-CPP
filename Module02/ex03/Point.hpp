/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:18:08 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 23:26:59 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
# define POINT_HPP_

# include "Fixed.hpp"

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

#endif // POINT_HPP_