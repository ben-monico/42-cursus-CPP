/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:24:47 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/13 00:10:20 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	public:
		// Constructors
		RPN();
		RPN(const RPN &copy);
		
		// Destructor
		~RPN();
		
		// Operators
		RPN & operator=(const RPN &assign);
		
		static void execute(std::string str);
		
	private:
		static std::stack<int> _nb_stack;
		static std::stack<char> _op_stack;

		static void do_op();
		
};

#endif