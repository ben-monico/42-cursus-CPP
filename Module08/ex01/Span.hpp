/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:11 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/05 18:59:55 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		// Constructors
		Span(unsigned int N);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void fillArray(int N);
		int &operator[](unsigned int n);


	private:
		Span();
		std::vector<int> _arr;
		unsigned int _storage;
		int _short;
		void updateShort(int a, int b);
	
		
};

#endif