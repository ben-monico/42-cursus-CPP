/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 03:16:10 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/28 03:38:47 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	std::ifstream filename(av[1]);
	if (!filename.is_open())
	{
		std::cout << "Invalid filename" << std::endl;
		return 1;
	}
}