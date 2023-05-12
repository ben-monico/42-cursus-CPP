/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:24:49 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/13 00:29:19 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int> RPN::_nb_stack;
std::stack<char> RPN::_op_stack;


// Constructors
RPN::RPN()
{
	std::cout << "\e[0;33mDefault Constructor called of RPN\e[0m" << std::endl;
}

RPN::RPN(const RPN &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of RPN\e[0m" << std::endl;
}


// Destructor
RPN::~RPN()
{
	std::cout << "\e[0;31mDestructor called of RPN\e[0m" << std::endl;
}


// Operators
RPN & RPN::operator=(const RPN &assign)
{
	(void) assign;
	return *this;
}

void RPN::do_op()
{
	int res;
	int a = _nb_stack.top();
	_nb_stack.pop();
	int b = _nb_stack.top();
	_nb_stack.pop();
	
	if (_op_stack.top() == '+')
		res = b + a;
	else if (_op_stack.top() == '-')
		res = b - a;
	else if (_op_stack.top() == '*')
		res = b * a;
	else if (_op_stack.top() == '/')
		res = b / a;
	_op_stack.pop();
	_nb_stack.push(res);
}

void RPN::execute(std::string str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		while (_nb_stack.size() >= 2 && _op_stack.size() >= 1)
			do_op();
		if (isdigit(str[i]))
			_nb_stack.push(str[i] - '0');
		else if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') && _nb_stack.size() > 1)
			_op_stack.push(str[i]);
		else if (!isspace(str[i]))
		{
			std::cout << "Error" << std::endl;
			return ;
		}
	}
	while (_nb_stack.size() >= 2 && _op_stack.size() >= 1)
		do_op();
	if (_nb_stack.size() == 1 && _op_stack.size() == 0)
		std::cout << _nb_stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}
