/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:16:05 by jde-paul          #+#    #+#             */
/*   Updated: 2024/09/30 23:38:17 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	checkArgs(int argc)
{
	if (argc != 2)
	{
		std::cerr << "USAGE: ./btc <filename>";
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (!checkArgs(argc))
		return (1);
	try
	{	
		BitcoinExchange::readData();
		
		BitcoinExchange::executeExchange(argv[1]);
	}
	catch (BitcoinExchange::InvalidFileException &e) { std::cerr << e.what();}
	return (0);
}
