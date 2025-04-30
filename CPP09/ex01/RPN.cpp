/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:15:30 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/30 10:19:15 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

double Operation::add(double a, double b) {return a + b;}
double Operation::divide(double a, double b)
{
	if (b == 0)
		throw DivideByZeroException();
	return a / b;
}
double Operation::multiply(double a, double b) {return a * b;}
double Operation::substract(double a, double b) {return a - b;}

double	Operation::identifyOperation(char c, double a, double b)
{
	std::cout << "a: " << a << " b: " << b << std::endl;
	if (c == '*')
		return multiply(a, b);
	else if (c == '/')
		return divide(a, b);
	else if (c == '-')
		return substract(a, b);
	else if (c == '+')
		return add(a, b);
	return 0;
}

bool	RPN::isOperator(char c)
{
	if (c == '-' || c == '+' || c == '/' || c == '*')
		return true;
	return false;
}

bool	RPN::checkLine(std::string &line)
{
	_d = 0;
	_op = 0;
	for (int i = 0; line[i]; i++)
	{
		if (!isdigit(line[i]) && !isOperator(line[i]) && line[i] != ' ')
			return false;
		else if (isdigit(line[i]))
			_d++;
		else if (isOperator(line[i]))
			_op++;
	}
	if (_d == _op + 1 && _d > 1 && _op > 0)
		return true;
	else
		return false;
}

void	RPN::readLine(std::string &line)
{
	if (!checkLine(line))
	{
		std::cout << "Error: operation not valid" << std::endl;
		return ;
	}
	for (int i = 0; line[i]; i++)
	{
		if (isdigit(line[i]))
		{
			char c[2];
			c[0] = line[i];
			c[1] = '\0';
			_stack.push(atoi(c));
		}
		if (isOperator(line[i]) && _op > 0)
		{
			double b = _stack.top();
			_stack.pop();
			double a = _stack.top();
			_stack.pop();
			try
			{
				_stack.push(identifyOperation(line[i], a, b));
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				return ;
			}
			_op--;
			std::cout << "op : " << _op << " top: " << _stack.top() << std::endl;
		}
		if (_op == 0)
			std::cout << _stack.top() << std::endl;
	}
}
