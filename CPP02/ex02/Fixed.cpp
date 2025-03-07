/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:13 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/07 14:26:58 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void){
	val = 0;
}

Fixed::Fixed(const int nb){
	val = (nb << bits);
}

Fixed::Fixed(const float nb){
	val = static_cast<int>(roundf(nb * (1 << bits)));
}

Fixed	&Fixed::operator=(const Fixed &a){
	val = a.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &toCopy){
	*this = toCopy;
}

std::ostream &operator<<(std::ostream &os, const Fixed &a){
	os << a.toFloat();
	return os;
}

int	Fixed::getRawBits(void) const{
	return val;
}

void Fixed::setRawBits(int const raw){
	val = (raw << bits);
}

float Fixed::toFloat(void) const{
	return static_cast<float>(val / (roundf(1 << bits)));
}

int Fixed::toInt(void) const{
	return (val >> bits);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}
