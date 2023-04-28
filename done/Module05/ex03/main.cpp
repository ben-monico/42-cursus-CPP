/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:04:40 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 17:49:28 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
		Intern Jeff;
		AForm *form;
		{
			Bureaucrat Bob("Bob", 6);
			form = Jeff.makeForm("robotomy request", "Shrek");
			std::cout << *form << std::endl;
			Bob.signForm(*form);
			Bob.executeForm(*form);
			delete form;
		}
		{
			form = Jeff.makeForm("shrubbery creation", "Fiona");
			std::cout << *form << std::endl;
			delete form;
		}
		{
			form = Jeff.makeForm("presidential pardon", "Donkey");
			std::cout << *form << std::endl;
			delete form;
		}
		{
			form = Jeff.makeForm("afsdfafd", "Dragon");
		}
		{
			form = Jeff.makeForm("", "Pinnocchio");
		}
		
}