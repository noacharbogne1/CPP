/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:03 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 12:57:48 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){

	Fixed a(10);
	Fixed const b(10.16f);
	Fixed c(a + b);

	if (a > b)
		std::cout << "a is higher than b" << std::endl;
	if (a < b)
		std::cout << "b is higher than a" << std::endl;
	if ((a + b) == c)
		std::cout << "a + b is equal to c" << std::endl;
		
	std::cout << c << "\t\tis c at start" << std::endl;
	std::cout << a << "\t\tis a at start\n" << std::endl;
	std::cout << ++a << "\tis a at ++a\n" << std::endl;
	std::cout << a << "\tis a after ++a\n" << std::endl;
	std::cout << a++ <<"\tis a at a++\n" << std::endl;
	std::cout << a << "\tis a after a++\n" << std::endl;

	std::cout << b << "\t\tvalue of b\n" << std::endl;

	std::cout << Fixed::max(a, b) << "\t\tthe max of a and b\n" << std::endl;
	std::cout << Fixed::min(a, b) << "\tthe min of a and b\n" << std::endl;

	return 0;
}
