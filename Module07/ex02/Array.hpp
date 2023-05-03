/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:53:42 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/02 19:49:53 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		// Constructors
		Array()
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			_arr = new T[0];
			_size = 0;
		}

		Array(int n)
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			_arr = new T[n];
			_size = n;
			if (n < 0)
			{
				std::cout << "\e[0;31mError: Negative size\e[0m" << std::endl;
				throw std::exception();
			}
		}

		Array(const Array &copy)
		{
			_arr = new T[copy.size()];
			_size = copy.size();
			for (int i = 0; i < copy.size(); i++)
				_arr[i] = copy[i];
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}
		
		// Destructor
		~Array()
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
				for (int i = 0; i < assign.size(); i++)
					_arr[i] = assign[i];
			}
			return *this;
		}
		
		T & operator[](int n)
		{
			if (n >= _size || n < 0)
				throw std::exception();
			return _arr[n];
		}

		T & operator[](int n) const
		{
			if (n >= _size || n < 0)
				throw std::exception();
			return _arr[n];
		}
		
		int size() const { return _size; }

	private:
		T *_arr;
		int _size;
};

#endif