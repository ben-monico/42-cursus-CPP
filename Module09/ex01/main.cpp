/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:26:57 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/13 00:25:07 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "\e[0;31mError: Wrong number of arguments\e[0m" << std::endl;
		return (1);
	}
	RPN::execute(av[1]);
	// (void) ac; (void) av;
	// RPN::execute("8 9 * 9 - 9 - 9 - 4 - 1 +"); //42
	// RPN::execute("7 7 * 7 -"); //42
	// RPN::execute("1 2 * 2 / 2 * 2 4 - +"); //0
}