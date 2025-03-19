/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:13 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 14:08:31 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void){
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &a){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &a)
		return *this;
	val = a.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &toCopy){
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nb){
	val = (nb << bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb){
	val = static_cast<int>(roundf(nb * (1 << bits)));
	std::cout << "Float constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const{
	return val;
}

void Fixed::setRawBits(int const raw){
	val = raw;
}

float Fixed::toFloat(void) const{
	return static_cast<float>(val / (roundf(1 << bits)));
}

int Fixed::toInt(void) const{
	return (val >> bits);
}


std::ostream &operator<<(std::ostream &os, const Fixed &a){
	os << a.toFloat();
	return os;
}