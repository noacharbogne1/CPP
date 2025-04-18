/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:54:18 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/18 13:16:17 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	std::deque<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	try
	{
		std::cout << easyfind(a, 2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> b;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	try
	{
		std::cout << easyfind(a, 9) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> c;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	try
	{
		std::cout << easyfind(a, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
