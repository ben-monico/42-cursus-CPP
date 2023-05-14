/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:48:58 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/14 17:34:14 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <algorithm>

std::vector<int> PmergeMe::_arr;
std::vector<int> PmergeMe::_sorted_arr;
std::vector<std::pair<int,int> > PmergeMe::pairs;


// Constructors
PmergeMe::PmergeMe()
{
	std::cout << "\e[0;33mDefault Constructor called of PmergeMe\e[0m" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of PmergeMe\e[0m" << std::endl;
}


// Destructor
PmergeMe::~PmergeMe()
{
	std::cout << "\e[0;31mDestructor called of PmergeMe\e[0m" << std::endl;
}


// Operators
PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{
	(void) assign;
	return *this;
}

void PmergeMe::merge_insert(char **av, int size)
{
	_arr.reserve(size);
	_sorted_arr.reserve(size);
	av_to_arr(av);
	pairs_sort();
	insert_pair2s();
}

void PmergeMe::insert_pair2s()
{
	for (unsigned int i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].second != 0)
		{
			
		}
	}
}

void PmergeMe::pairs_sort()
{
	for (unsigned int i = 0; i < _arr.size(); i += 2)
	{
		std::pair<int,int> pair;
		pair.first =_arr[i];
		if (i + 1 < _arr.size())
		{
			if (_arr[i + 1] < _arr[i])
			{
				pair.first = _arr[i + 1];
				pair.second = _arr[i];
			}
			else
				pair.second = _arr[i + 1];
		}
		pairs.push_back(pair);
	}
	std::sort(pairs.begin(), pairs.end());
	for (unsigned int i = 0; i < pairs.size(); i++)
		_sorted_arr.push_back(pairs[i].first);
	
	//print pairs
	for (unsigned int i = 0; i < pairs.size(); i++)
		std::cout << "[" << pairs[i].first << ", " << pairs[i].second << "] ";
	//print sorted array
	std::cout << std::endl;
	for (unsigned int i = 0; i < _sorted_arr.size(); i++)
		std::cout << _sorted_arr[i] << " ";
}


void PmergeMe::av_to_arr(char **av)
{
	for (int i = 0; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if ((!isdigit(av[i][j]) && av[i][j] != '+') || \
				(av[i][j] == '+' && j != 0))
			{
				std::cout << "Error: Not a positive integer." << std::endl;
				exit(1) ;
			}
		}
		long number = strtol(av[i], NULL, 10);
		if (errno == EINVAL || errno == ERANGE || number > INT_MAX || number < 0)
		{
			std::cout << "Error: Not a positive integer." << std::endl;
			exit(1) ;
		}
		_arr.push_back(number);
	}
}

