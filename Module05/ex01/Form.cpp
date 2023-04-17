/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:55:48 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/17 17:47:03 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _signGrade(1), _execGrade(1)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), \
_signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "\e[0;33mDefault Constructor called of Form \e[0m" << this->_name << std::endl;
}

Form::Form(const Form &copy) : _name(copy.getName()), _isSigned(copy.getSignBool()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	this->_isSigned = assign.getSignBool();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Form &F) 
{
	out << "Form " << F.getName() << ":" << std::endl;
	out << "\tSigned: " << F.getSignBool() << std::endl;
	out << "\tRequired Sign Grade: " << F.getSignGrade() << std::endl;
	out << "\tRequired Execution Grade: " << F.getExecGrade() << std::endl;
	return out;
}

const char* Form::GradeTooLowException::what() const throw() 
{
	return "Grade is too low";
}

const char* Form::GradeTooHighException::what() const throw() 
{
	return "Grade is too high";
}

void Form::beSigned(Bureaucrat &B)
{
	if (B.getGrade() > this->getSignGrade() || B.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

std::string Form::getName() const { return _name; }
bool Form::getSignBool() const { return _isSigned; }
int Form::getSignGrade() const { return _signGrade; }
int Form::getExecGrade() const { return _execGrade; }