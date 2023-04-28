/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:20:47 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 01:54:18 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
	Base *base = NULL;
	base = base->generate();
	std::cout << "ID by ptr: "; 
	base->identify(base);
	std::cout << "ID by ref: "; 
	base->identify(base);
	delete base;

}