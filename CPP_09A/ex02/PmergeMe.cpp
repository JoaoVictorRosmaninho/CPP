/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 02:54:04 by jde-paul          #+#    #+#             */
/*   Updated: 2024/09/30 23:37:37 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int jacobsthal(int n)
{
	if (n == 0)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void PmergeMe::merge(int argc, char **argv)
{
	double listDuration = _sortByList(argv);
	double vectorDuration = _sortByVector(argv);

	std::cout << std::endl
			  << "Time to process a range of " << argc - 1
			  << " elements with std::list: " << std::fixed
			  << std::setprecision(5) << listDuration << " µs" << std::endl;

	std::cout << std::endl
			  << "Time to process a range of " << argc - 1
			  << " elements with std::vector: " << std::fixed
			  << std::setprecision(5) << vectorDuration << " µs" << std::endl;
}

double PmergeMe::_sortByList(char **argv)
{
	std::list<int> unsorted;
	std::list<int> sorted;

	std::cout << "[SORTING WITH: std::list]" << std::endl;

	for (int i = 1; argv[i]; i++)
	{
		unsorted.push_back(std::atoi(argv[i]));
	}

	clock_t start = clock();
	std::cout << "Before: ";
	printNumbers(unsorted);

	sorted = sortedOrder(unsorted);

	std::cout << "After: ";
	printNumbers(sorted);
	clock_t end = clock();

	double duration = double(end - start) / CLOCKS_PER_SEC;
	return duration;
}

double PmergeMe::_sortByVector(char **argv)
{
	std::vector<int> unsorted;
	std::vector<int> sorted;

	std::cout << std::endl
			  << "[SORTING WITH: std::vector]" << std::endl;

	for (int i = 1; argv[i]; i++)
	{
		unsorted.push_back(std::atoi(argv[i]));
	}

	clock_t start = clock();
	std::cout << "Before: ";
	printNumbers(unsorted);

	sorted = sortedOrder(unsorted);

	std::cout << "After: ";
	printNumbers(sorted);
	clock_t end = clock();

	double duration = double(end - start) / CLOCKS_PER_SEC;
	return duration;
}
