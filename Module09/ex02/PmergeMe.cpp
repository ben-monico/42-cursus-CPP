/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:48:58 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/14 19:06:36 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <algorithm>
#include <ctime>
#include <iomanip>

std::vector<int> PmergeMe::_arr;
std::vector<int> PmergeMe::_sorted_arr;
std::vector<std::pair<int,int> > PmergeMe::pairs;

std::list<int> PmergeMe::_list;
std::list<int> PmergeMe::_sorted_list;
std::list<std::pair<int,int> > PmergeMe::list_pairs;

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

void PmergeMe::execute(char **av, int size)
{
	long double vector_time;
	long double list_time;
	_arr.reserve(size);
	_sorted_arr.reserve(size);
	av_to_arr(av);
	
	//measure clocks
	std::clock_t start = std::clock();
	merge_insert_vector();
	vector_time = (double)((std::clock() - start) / (double)CLOCKS_PER_SEC);
	start = std::clock();
	merge_insert_list();
	list_time = (double)((std::clock() - start) / (double)CLOCKS_PER_SEC);
	
	//print results
	std::cout << "Before: " << t_print(_arr) << std::endl;
	std::cout << "After: " << t_print(_sorted_arr) << std::fixed << std::setprecision(6) << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::vector: " << vector_time << " us" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::list: " << list_time << " us" << std::endl;
}

void PmergeMe::merge_insert_vector()
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
	for (unsigned int i = 0; i < pairs.size(); i++)
		if (pairs[i].second != 0)
			_sorted_arr.insert(lower_bound(_sorted_arr.begin(), _sorted_arr.end(),pairs[i].second), pairs[i].second);	
}

void PmergeMe::merge_insert_list()
{
	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it)
	{
		std::pair<int,int> pair;
		pair.first = *it;
		if (++it != _list.end())
		{
			if (*it < pair.first)
			{
				pair.first = *it;
				pair.second = *(--it);
				++it;
			}
			else
				pair.second = *it;
		}
		else
			pair.second = 0;
		list_pairs.push_back(pair);
		if (it == _list.end())
			break;
	}
	list_pairs.sort();
	for (std::list<std::pair<int,int> >::iterator it = list_pairs.begin(); it != list_pairs.end(); it++)
		_sorted_list.push_back(it->first);
	for (std::list<std::pair<int,int> >::iterator it = list_pairs.begin(); it != list_pairs.end(); it++)
		if (it->second != 0)
			_sorted_list.insert(lower_bound(_sorted_list.begin(), _sorted_list.end(),it->second), it->second);
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
		_list.push_back(number);
	}
}

