/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:56:03 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/28 17:47:31 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		virtual ~AForm();
		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		class UnsignedException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};

		virtual void beSigned(Bureaucrat &B);
		virtual std::string getName() const;
		virtual bool getSignBool() const;
		virtual int getSignGrade() const;
		virtual int getExecGrade() const;
		void execute(Bureaucrat const & executor) const;
		void CatchExceptions(Bureaucrat const &) const;
	
	protected:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		AForm & operator=(const AForm &assign);
		virtual void execution() const = 0;
		
		
		
	private:
		AForm();
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
};

std::ostream & operator<<(std::ostream &out, AForm &F);

#endif