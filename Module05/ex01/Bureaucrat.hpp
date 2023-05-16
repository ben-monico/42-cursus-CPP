/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:56:01 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 15:31:27 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);

		std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		
		void increment();
		void decrement();
		void signForm(Form &F);
		
	private:
		Bureaucrat();
		const std::string _name;
		int _grade;

};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &B);

#endif