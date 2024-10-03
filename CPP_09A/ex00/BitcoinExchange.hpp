/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:16:20 by jde-paul          #+#    #+#             */
/*   Updated: 2024/09/30 23:38:20 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>	
#include <iostream> 
#include <map>		
#include <sstream>	
#include <stdlib.h> 
#include <string>	

class BitcoinExchange
{
private:
	static std::map<std::string, double> _map;

	/* Orthodox Canonical methods */
	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const &src);
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	~BitcoinExchange(void);

public:
	static void readData(void);
	static void printMap(void);
	static void executeExchange(char *filename);
	static double findLower(const std::string &date);

	/* Exceptions */
	class InvalidFileException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif