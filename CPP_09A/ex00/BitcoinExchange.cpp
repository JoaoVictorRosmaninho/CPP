/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:16:13 by jde-paul          #+#    #+#             */
/*   Updated: 2024/09/30 23:38:17 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double>	BitcoinExchange::_map;

const char *BitcoinExchange::InvalidFileException::what(void) const throw()
{
	return ("Error: could not open file.");
}

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "Default Constructor Called." << std::endl;
	return;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	std::cout << "Default Constructor Called." << std::endl;
	*this = src;
	return;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "Destructor Called." << std::endl;
	return;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	std::cout << "Assignment Operator Called." << std::endl;
	(void)rhs;
	return (*this);
}

static bool checkDate(std::string date)
{
	/* Size check */
	if (date.size() != 10)
		return (false);
	/* Month check */
	if (date[5] != '0' && date[5] != '1')
		return (false);
	/* Day check */
	if (date[8] > '3' || date[8] < '0')
		return (false);
	/* Only digits check */
	for (size_t i = 0; i < date.size(); i++)
	{
		if (!std::isdigit(date[i]) && date[i] != '-')
			return (false);
	}
	return (true);
}

static bool checkSeparator(std::string row)
{
	/* '|' check */
	if (row.find('|') == std::string::npos)
		return (false);
	/* White space check */
	if (row[row.find('|') + 1] != ' ' || row[row.find('|') - 1] != ' ')
		return (false);
	/* Only digits check and permitted separators */
	for (size_t i = 0; i < row.size(); i++)
	{
		if (!std::isdigit(row[i]) && row[i] != '-' &&
			row[i] != '|' && row[i] != '.' && row[i] != ' ')
			return (false);
	}
	return (true);
}

static bool checkValue(std::string value)
{
	int		i;
	float	fvalue;

	/* Positive check */
	i = -1;
	while (value[++i] == ' ')
		;
	if (value[i] == '-')
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}

	/* Digitis check */
	i = -1;
	while (value[++i])
	{
		while (value[i] == ' ')
			i++;
		if (!std::isdigit(value[i]) && value[i] != '.')
		{
			std::cerr << "Error: not a number." << std::endl;
			return (false);
		}
	}

	/* Size check */
	fvalue = std::atof(value.c_str());
	if (fvalue > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::readData(void)
{
	std::ifstream data("./data/data.csv");
	std::string row;

	if (!data.is_open())
		throw BitcoinExchange::InvalidFileException();
	std::getline(data, row);
	while (std::getline(data, row))
	{
		std::istringstream iss(row);
		std::string date;
		std::string valueStr;

		/*read until limiter ','*/
		if (!std::getline(iss, date, ',') || !std::getline(iss, valueStr))
			continue;
		if (!checkDate(date))
			return;
		float value = atof(valueStr.c_str());
		BitcoinExchange::_map.insert(std::pair<std::string, double>(date, value));
	}
}

void BitcoinExchange::executeExchange(char *filename)
{
	std::ifstream fs(filename);
	std::string row;

	if (!fs.is_open())
		throw BitcoinExchange::InvalidFileException();

	/*check first line pattern*/
	std::getline(fs, row);
	if (row != "date | value")
	{
		std::cerr << "Error: bad input => " << row << std::endl;
		return;
	}

	while (std::getline(fs, row))
	{
		std::string date;
		std::string value;
		float fValue;
		float closestValue;
		size_t splitPoint;

		/*get values of date and value*/
		splitPoint = row.find('|');
		date = row.substr(0, splitPoint - 1);
		value = row.substr(splitPoint + 2, row.length());
		if (!checkDate(date) || (!checkSeparator(row)))
		{
			std::cerr << "Error: bad input => " << row << std::endl;
			continue;
		}
		if (!checkValue(value))
			continue;
		fValue = atof(value.c_str());
		closestValue = findLower(date);
		std::cout << date << " => " << fValue << " = " << closestValue * fValue << std::endl;
	}
}




double BitcoinExchange::findLower(const std::string &date)
{
	std::map<std::string, double>::const_iterator it = BitcoinExchange::_map.lower_bound(date);
	const std::string &returnDate = it->first;

	if (it == BitcoinExchange::_map.begin() || returnDate == date)
		return (it->second);
	--it;
	return (it->second);
}

void	BitcoinExchange::printMap(void)
{
	std::map<std::string, double>::iterator	it = BitcoinExchange::_map.begin();

	for (; it != BitcoinExchange::_map.end(); it++)
		std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
}