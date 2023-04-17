/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:40 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/17 17:48:41 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Al", 19);
		std::cout << a <<std::endl;
		Form f("Anti-Vaxxers", 32, 46);
		std::cout << f << std::endl;
		f.beSigned(a);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat a("Ben", 20);
		std::cout << a <<std::endl;
		Form f("Anti-Vaxxers", 18, 46);
		std::cout << f << std::endl;
		f.beSigned(a);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a("Ben", 21);
		std::cout << a <<std::endl;
		Form f("Anti-Vaxxers", 23, 17);
		std::cout << f << std::endl;
		f.beSigned(a);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}