/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:20:52 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/18 17:15:10 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	this->_target = assign.getTarget();
	return *this;
}

void ShrubberyCreationForm::execution() const
{
	std::ofstream out((_target + "_shrubbery").c_str());
	
	out << "	           ,@@@@@@@," << std::endl;
	out << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	out << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	out << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	out << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	out << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	out << "       |o|        | |         | |" << std::endl;
	out << "       |.|        | |         | |" << std::endl;
	out << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}


std::string ShrubberyCreationForm::getTarget() const { return _target; }