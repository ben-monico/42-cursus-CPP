/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:43:34 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/14 16:04:18 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error: Program requires additional arguments." << std::endl;
		return (0);
	}
	int i = 0;
	while (av[i])
		i++;
	PmergeMe::merge_insert(++av, i);
}