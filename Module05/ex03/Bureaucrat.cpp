/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:56:00 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/27 15:26:18 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << this->_name << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "\e[0;33mParameter Constructor called of Bureaucrat \e[0m" << this->_name << std::endl;
	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
	else
		this->_grade = grade;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}


std::ostream &operator <<(std::ostream &out, const Bureaucrat &B)
{
	out << B.getName() << ", bureaucrat grade " << B.getGrade() << "." << std::endl;
	return out;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return "Grade is too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
	return "Grade is too high";
}

void Bureaucrat::decrement()
{
	if (_grade == 150)
		throw GradeTooHighException();
	else
		_grade++;
}

void Bureaucrat::increment()
{
	if (_grade == 1)
		throw GradeTooLowException();
	else
		_grade--;
}

void Bureaucrat::signForm(AForm &F)
{
	try
	{
		F.beSigned(*this);
		std::cout << this->_name << "\e[0;32m signed \e[0m" << F.getName() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << this->_name << "\e[0;31m couldn't sign \e[0m" << F.getName() \
		<< "\e[0;31m because his grade is not high enough.\e[0m" << std::endl;
	}
	
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << "\e[0;32m executed \e[0m" << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << "\e[0;31m could not execute form because: \e[0m";
		std::cout << e.what() << std::endl;
	}
	catch (AForm::UnsignedException &e)
	{
		std::cout << this->_name << "\e[0;31m could not execute form because: \e[0m";
		std::cout << e.what() << std::endl;
	}
}
