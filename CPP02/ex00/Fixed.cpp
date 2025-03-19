/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:13 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 14:08:02 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void){
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy){
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed	&Fixed::operator=(const Fixed &a){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &a)
		return *this;
	val = a.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return val;
}

void Fixed::setRawBits(int const raw){
	val = raw;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}
