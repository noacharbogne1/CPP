/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:03 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/10 12:20:21 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	if (a > b)
	std::cout << "a is higher than b" << std::endl;
	if (d == b)
	std::cout << "d is equal to b" << std::endl;

	return 0;
}
