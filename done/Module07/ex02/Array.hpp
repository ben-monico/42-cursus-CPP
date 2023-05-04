/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:53:42 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/04 15:43:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _size;

	public:
		// Constructors
		Array<T>() : _size(0)
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			_arr = new T[0];
		}

		Array<T>(unsigned int n) : _size(n)
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			_arr = new T[n];
		}

		Array<T>(const Array &copy)
		{
			_arr = new T[copy.size()];
			_size = copy.size();
			for (unsigned int i = 0; i < copy.size(); i++)
				_arr[i] = copy[i];
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}
		
		// Destructor
		~Array<T>()
		{
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
			delete [] _arr;
		}
		
		// Operators
		Array<T> & operator=(const Array<T> &assign)
		{
			std::cout << "\e[0;33mAssignment Operator called of Array\e[0m" << std::endl;
			if (this != &assign)
			{
				delete [] _arr;
				_arr = new T[assign.size()];
				_size = assign.size();
				for (unsigned int i = 0; i < assign.size(); i++)
					_arr[i] = assign[i];
			}
			return *this;
		}
		
		T & operator[](unsigned int n)
		{
			if (n >= _size)
				throw std::exception();
			return _arr[n];
		}

		T & operator[](unsigned int n) const
		{
			if (n >= _size || n < 0)
				throw std::exception();
			return _arr[n];
		}
		
		unsigned int size() const { return _size; }

};

#endif