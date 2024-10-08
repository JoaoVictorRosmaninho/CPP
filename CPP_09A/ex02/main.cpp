/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:31:20 by gilmar            #+#    #+#             */
/*   Updated: 2024/09/30 23:37:37 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool checkInput(char **argv);

int main(int argc, char **argv)
{
	if (argc <= 2)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}

	if (checkInput(argv) == false)
	{
		std::cerr << "Error: Invalid argument" << std::endl;
		return 1;
	}

	try
	{
		PmergeMe pmergeMe;
		pmergeMe.merge(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

bool checkInput(char **argv)
{
	std::vector<int> numbers;

	for (int i = 1; argv[i]; i++)
	{
		if (isdigit(argv[i][0]) == 0)
		{
			std::cerr << "Error: Invalid argument" << std::endl;
			return false;
		}
	
		int tmp = std::atoi(argv[i]);
		if (std::find(numbers.begin(), numbers.end(), tmp) != numbers.end())
		{
			return false;
		}
		numbers.push_back(tmp);
	}

	return true;
}
