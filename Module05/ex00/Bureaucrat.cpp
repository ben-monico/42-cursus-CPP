#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	HighException he;
	LowException le;
	std::cout << "\e[0;33mParameter Constructor called of Bureaucrat\e[0m" << std::endl;
	if (grade < 1)
		throw(he.GradeTooHighException());
	else if (grade > 150)
		throw(le.GradeTooLowException());
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	(void) assign;
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

const std::string Bureaucrat::LowException::GradeTooLowException() const throw() 
{
	return "Grade is too low";
}

const std::string Bureaucrat::HighException::GradeTooHighException() const throw() 
{
	return "Grade is too high";
}