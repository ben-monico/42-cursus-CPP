/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:47:56 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 15:00:27 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	int	n;

	if (ac != 2)
		return 1;
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR", "none"};
	for (int i = 0; i < 4; i++)
		if (av[1] == str[i])
			n = i;
	switch (n)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
