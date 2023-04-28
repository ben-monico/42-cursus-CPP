/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:56:03 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 17:28:42 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &copy);
		~Form();
		Form & operator=(const Form &assign);
		
		void beSigned(Bureaucrat &B);

		std::string getName() const;
		bool getSignBool() const;
		int getSignGrade() const;
		int getExecGrade() const;
	
		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		
	private:
		Form();
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
		
		
};
std::ostream & operator<<(std::ostream &out, Form &F);

#endif