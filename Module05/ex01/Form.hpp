/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:56:03 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/17 17:59:50 by bcarreir         ###   ########.fr       */
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
		
		virtual void beSigned(Bureaucrat &B) = 0;
	
		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* what() const throw();
		};
		
	private:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		AForm();
		AForm & operator=(const AForm &assign);
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
		
		
};
std::ostream & operator<<(std::ostream &out, AForm &F);

#endif