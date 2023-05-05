/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:04:39 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/05 19:25:55 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(10);
	sp.addNumber(3);
	sp.addNumber(6);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(134);
	sp.fillArray(100);
	std::cout << "shortest = " << sp.shortestSpan() << std::endl;
	std::cout << "longest = " <<  sp.longestSpan() << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << sp[i] << std::endl;
	return 0;
}