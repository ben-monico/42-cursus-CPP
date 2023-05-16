/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:43:48 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/16 15:33:22 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int arr[8] = {0, 4, 3, 5, 2, 4, 56, 43};
	std::vector<int> vec(arr, arr  + (sizeof(arr) / sizeof(int)));
	
	std::cout << *easyfind(vec, 4) << std::endl;
	std::cout << *easyfind(vec, 56) << std::endl;
	try
	{
		std::cout << *easyfind(vec, 17) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::string str = "Hello World";
	std::string::iterator it = easyfind(str, 'e');
	std::cout << *it++ << std::endl;
	std::cout << *it << std::endl;
	try
	{
		std::cout << *easyfind(str, 'Z') << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}