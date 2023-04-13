#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);


		std::string getName() const;
		int getGrade() const;

		class HighException : public std::exception
		{
			public:
				virtual const std::string GradeTooHighException() const throw();
		};

		class LowException : public std::exception
		{
			public:
				virtual const std::string GradeTooLowException() const throw();
		};
		
	private:
		Bureaucrat();
		const std::string _name;
		int _grade;
};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &B);

#endif