/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:15:28 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/30 10:19:29 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>

class Operation
{
	public:
		double identifyOperation(char c, double a, double b);
		double add(double a, double b);
		double divide(double a, double b);
		double multiply(double a, double b);
		double substract(double a, double b);
		class DivideByZeroException;
};

class Operation::DivideByZeroException : public std::exception
{
	public :
		DivideByZeroException() {}
		const char* what() const throw() {
			return "Error: division by 0";
		}
		~DivideByZeroException() throw() {}
};

class RPN : public Operation
{
	private:
		std::stack<double> _stack;
		int _op;
		int _d;
	public:
		void readLine(std::string &line);
		bool checkLine(std::string &line);
		bool isOperator(char c);
};

#endif