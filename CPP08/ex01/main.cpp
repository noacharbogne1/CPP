/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:22:35 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/18 16:06:57 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;

	Span e = Span(0);
	try
	{
		e.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> p;
	p.push_back(5);
	p.push_back(55);
	p.push_back(59);
	p.push_back(78);
	p.push_back(51);
	p.push_back(11);
	p.push_back(1);
	p.push_back(523);

	Span s = Span(5);
	try
	{
		s.severalElems(p.begin(), p.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
