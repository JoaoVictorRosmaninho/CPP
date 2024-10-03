/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:16:20 by jde-paul          #+#    #+#             */
/*   Updated: 2024/09/30 23:38:17 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream> 
#include <stack>	
#include <cmath>	

class RPN
{
private:
	std::stack<int> _stack;

	/* Member Functions */
	void validateExperession(std::string expression);
	void printStack(void);
	void evaluateExpression(std::string expression);
	int calculate(int &templ, int &tempr, char op);

public:
	/* Orthodox Canonical Form methods */
	RPN(void);
	RPN(std::string expression);
	RPN(RPN const &src);
	RPN &operator=(RPN const &rhs);
	~RPN(void);

	/* Exceptions */
	class BadInputException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class ZeroDivisionException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class NotEnoughOperators : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
#endif