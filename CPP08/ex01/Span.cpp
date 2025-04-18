/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:22:58 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/18 16:07:26 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int N) : _N(N), _idx(0) {}

void	Span::addNumber(int nb)
{
	if (_idx == _N)
		throw NewElemException();
	_idx++;
	_vector.push_back(nb);
}

void Span::severalElems(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_idx + std::distance(begin, end) > _N)
		throw NewElemException();
	_idx += std::distance(begin, end);
	_vector.insert(_vector.end(), begin, end);
	// for(std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// }
}

int	Span::shortestSpan(void)
{
	if (_idx < 2)
		throw NoElemException();
	std::sort(_vector.begin(), _vector.end());
	int	span = INT_MAX;
	for(std::vector<int>::iterator it = _vector.begin(); it != _vector.end() - 1; it++)
	{
		int dist = *(it + 1) - *it;
		if (dist < span)
			span = dist;
	}
	return span;
}

int	Span::longestSpan(void)
{
	if (_idx < 2)
		throw NoElemException();
	int	min = *std::min_element(_vector.begin(), _vector.end());
	int	max = *std::max_element(_vector.begin(), _vector.end());
	return max - min;
}
