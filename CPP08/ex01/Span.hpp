/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:51:51 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/18 15:52:38 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <limits.h>

class NewElemException : public std::exception
{
	public :
		NewElemException() {}
		const char* what() const throw() {
			return "The container is full";
		}
		~NewElemException() throw() {}
};

class NoElemException : public std::exception
{
	public :
		NoElemException() {}
		const char* what() const throw() {
			return "The container is empty or contains only one element";
		}
		~NoElemException() throw() {}
};

class Span
{
	private:
		int	_N;
		int _idx;
		std::vector<int>	_vector;
	public:
		Span(int N);
		void addNumber(int nb);
		void severalElems(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif