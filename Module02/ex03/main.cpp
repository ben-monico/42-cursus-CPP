/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:54:16 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/01 21:46:28 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point const a(3.0f, 4.0f);
	Point const b(5.0f, 2.0f);
	Point const c(6.0f, 7.0f);
	{
		Point const point(4.3, 4.2);
		std::cout << (bsp(a, b, c, point)) << std::endl;
	}
	{
		Point const point(5.05f, 4.78f);
		std::cout << (bsp(a, b, c, point)) << std::endl;
	}
	{
		Point const point(3.24f, 4.07f);
		std::cout << (bsp(a, b, c, point)) << std::endl;
	}
	
	{
		Point const point(2.0f, 5.0f);
		std::cout << (bsp(a, b, c, point)) << std::endl;
	}
	{
		Point const point(3.0f, 4.0f);
		std::cout << (bsp(a, b, c, point)) << std::endl;
	}
	{
		Point const point(4.0f, 5.0f);
		std::cout << (bsp(a, b, c, point)) << std::endl;
	}
}
