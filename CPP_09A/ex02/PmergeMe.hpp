/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 02:53:52 by jde-paul          #+#    #+#             */
/*   Updated: 2024/09/30 23:38:17 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe
{
public:
	void merge(int argc, char **argv);

private:
	double _sortByList(char **argv);
	double _sortByVector(char **argv);
};

int jacobsthal(int n);

template <typename T>
void printNumbers(const T &container)
{
	typename T::const_iterator it;

	for (it = container.begin(); it != container.end(); it++)
	{
		std::cout << *it << " ";
	}

	std::cout << std::endl;
}





template <typename T>
T insertionOrder(size_t listSize)
{
	T jacobsthalSequence;
	T sequence;
	size_t jacobsthalNumber;
	size_t indexOutOfJacobsthal;
	size_t lastJacobsthalNumber;

	if (listSize < 1)
	{
		return sequence;
	}

	jacobsthalNumber = 2;
	int nextJacobsthalNumber = jacobsthal(jacobsthalNumber++);

	
	while (nextJacobsthalNumber <= static_cast<int>(listSize))
	{
		jacobsthalSequence.push_back(nextJacobsthalNumber);
		nextJacobsthalNumber = jacobsthal(jacobsthalNumber++);
	}

	lastJacobsthalNumber = 1;
	jacobsthalNumber = 1;

	
	for (typename T::iterator it = jacobsthalSequence.begin(); it != jacobsthalSequence.end(); ++it)
	{
		jacobsthalNumber = *it;

		sequence.push_back(jacobsthalNumber);

		indexOutOfJacobsthal = jacobsthalNumber - 1;
		while (indexOutOfJacobsthal > lastJacobsthalNumber)
		{
			sequence.push_back(indexOutOfJacobsthal);
			indexOutOfJacobsthal--;
		}
		lastJacobsthalNumber = jacobsthalNumber;
	}
	
	while (jacobsthalNumber++ < listSize)
	{
		sequence.push_back(jacobsthalNumber);
	}

	return sequence;
}





template <typename T>
void sortedPairs(T &pairs, size_t size)
{
	if (size < 2)
	{
		return;
	}

	T left;
	T right;

	typename T::iterator it = pairs.begin();
	for (size_t i = 0; i < size / 2; i++)
	{
		left.push_back(*it++);
	}

	for (size_t i = size / 2; i < size; i++)
	{
		right.push_back(*it++);
	}

	pairs.clear();

	sortedPairs(left, left.size());
	sortedPairs(right, right.size());

	
	while (!right.empty() && !left.empty())
	{
		if (left.front().first < right.front().first)
		{
			
			
			
			pairs.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			pairs.push_back(right.front());
			right.erase(right.begin());
		}
	}

	
	while (!left.empty())
	{
		pairs.push_back(left.front());
		left.erase(left.begin());
	}

	while (!right.empty())
	{
		pairs.push_back(right.front());
		right.erase(right.begin());
	}
}





template <typename T>
T sortedOrder(T &sequence)
{
	int stragglers = -1;

	if (sequence.size() < 2)
	{
		return sequence;
	}

	
	if (sequence.size() % 2 != 0)
	{
		stragglers = sequence.back();
		sequence.pop_back();
	}

	std::list<std::pair<int, int> > pairs;

	
	for (typename T::iterator it = sequence.begin(); it != sequence.end(); ++it)
	{
		int first = *it;
		int second = *(++it);
		if (first < second)
		{
			pairs.push_back(std::make_pair(second, first));
		}
		else
		{
			pairs.push_back(std::make_pair(first, second));
		}
	}

	
	sortedPairs(pairs, pairs.size());

	T mainChain;
	T pend;

	
	
	for (typename std::list<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
	{
		mainChain.push_back(it->first);
		pend.push_back(it->second);
	}

	
	if (stragglers != -1)
	{
		pend.push_back(stragglers);
	}

	
	mainChain.insert(mainChain.begin(), pend.front());

	
	T indexOrder = insertionOrder<T>(pend.size() - 1);

	
	if (!indexOrder.empty())
	{
		for (typename T::iterator it = indexOrder.begin(); it != indexOrder.end(); ++it)
		{
			typename T::iterator itPend = pend.begin();
			std::advance(itPend, *it);
			typename T::iterator itPositionInsertion = std::lower_bound(mainChain.begin(), mainChain.end(), *itPend);
			mainChain.insert(itPositionInsertion, *itPend);
		}
	}

	return mainChain;
}

#endif