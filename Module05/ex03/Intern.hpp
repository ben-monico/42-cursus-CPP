/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:56:46 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/18 23:52:29 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);
		~Intern();
		
		AForm *makePresidentialPardonForm(std::string target);
		AForm *makeRobotomyRequestForm(std::string target);
		AForm *makeShrubberyCreationForm(std::string target);
		
		// Operators
		Intern & operator=(const Intern &assign);
		AForm* makeForm(std::string const form, std::string const target);
		
		
	private:
		
		
};

#endif