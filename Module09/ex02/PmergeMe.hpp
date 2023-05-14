/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:48:59 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/14 17:32:50 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>

class PmergeMe
{
	public:
		// Constructors
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		
		// Destructor
		~PmergeMe();
		
		// Operators
		PmergeMe & operator=(const PmergeMe &assign);
		
		static void merge_insert(char **av, int size);

	private:
		static std::vector<int> _arr;
		static std::vector<int> _sorted_arr;
		static std::vector<std::pair<int,int> > pairs;


		static void av_to_arr(char **av);
		static void pairs_sort();
		static void insert_pair2s();


		
};

#endif