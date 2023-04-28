/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:55:48 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 17:33:00 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "\e[0;33mDefault Constructor called of Form \e[0m" << this->_name << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw(Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw(Form::GradeTooLowException());
}

Form::Form(const Form &copy) : _name(copy.getName()), _isSigned(false), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

Form & Form::operator=(const Form &assign)
{
	if (this->_signGrade <= assign.getSignGrade())
		this->_isSigned = assign.getSignBool();
	else
		throw Form::GradeTooLowException();
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
	if (B.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

std::string Form::getName() const { return _name; }
bool Form::getSignBool() const { return _isSigned; }
int Form::getSignGrade() const { return _signGrade; }
int Form::getExecGrade() const { return _execGrade; }