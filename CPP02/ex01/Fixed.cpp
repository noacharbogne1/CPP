/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:13 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/07 11:34:15 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void){
	val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb){
	
}

Fixed::Fixed(const float nb){

}

Fixed::Fixed(const Fixed &toCopy){
	std::cout << "Copy constructor called" << std::endl;
	val = toCopy.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &a){
	std::cout << "Copy assignment operator called" << std::endl;
	val = a.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &a){
	os << a.toFloat();
	return os;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return val;
}

void Fixed::setRawBits(int const raw){
	val = raw;
}

float Fixed::toFloat(void) const{

}

int Fixed::toInt(void) const{

}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}
