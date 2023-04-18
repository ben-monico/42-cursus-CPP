/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:40 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/18 18:53:56 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
		Bureaucrat a("Arnold", 19);
		Bureaucrat b("Ben", 138);
		ShrubberyCreationForm S("Cowabunga");
	
		std::cout << a <<std::endl;
		std::cout << b <<std::endl;
		std::cout << S << std::endl;
		
		b.executeForm(S);
		a.executeForm(S);
		a.signForm(S);
		b.executeForm(S);
		b.increment();
		b.executeForm(S);
		a.executeForm(S);

		Bureaucrat c("Cronix", 46);
		Bureaucrat d("Darius", 3);
		RobotomyRequestForm R("Shrek");
		PresidentialPardonForm P("Homer Simpson");
		
		std::cout << c <<std::endl;
		std::cout << d <<std::endl;
		
		c.executeForm(R);
		c.executeForm(P);
		c.signForm(P);
		c.signForm(R);
		c.increment();
		
		d.executeForm(R);
		d.executeForm(P);
		d.signForm(P);
		d.signForm(R);
		c.executeForm(P);
		d.executeForm(P);
		d.executeForm(R);
		d.executeForm(R);
		c.executeForm(R);
		c.executeForm(R);
		c.executeForm(R);
		c.executeForm(R);
		d.executeForm(R);
		d.executeForm(R);
		d.executeForm(R);
		d.executeForm(R);
		d.executeForm(P);
}