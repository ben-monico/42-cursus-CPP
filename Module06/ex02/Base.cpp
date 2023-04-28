/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:21:36 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 01:52:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cmath>
#include <ctime>

// Destructor
Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}

Base *Base::generate(void)
{
	Base *base;
	srand(time(0));
	
	int random = rand() % 3;
	if (random == 0)
		base = new A;
	else if (random == 1)
		base = new B;
	else
		base = new C;
	return base;
}

void Base::identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B* b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C* c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void Base::identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}