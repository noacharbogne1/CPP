/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:21:55 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/17 13:36:54 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int	a = 2;
	int	b = -4;
	std::cout << "The max of " << a << " and " << b
		<< " is " << ::max(a, b) << std::endl;
	std::cout << "The min of " << a << " and " << b
		<< " is " << ::min(a, b) << std::endl;
	std::cout << "Before swap a = " << a << " and b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap a = " << a << " and b = "
		<< b << std::endl;
	int e = -4;
	std::cout << "a == " << ::min(a, e) << std::endl;

	std::cout << std::endl;
	float	c = 6.91f;
	float	d = -98.56f;
	std::cout << "The max of " << c << " and " << d
		<< " is " << ::max(c, d) << std::endl;
	std::cout << "The min of " << c << " and " << d
		<< " is " << ::min(c, d) << std::endl;
	std::cout << "Before swap c = " << c << " and d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap c = " << c << " and d = "
		<< d << std::endl;
}
