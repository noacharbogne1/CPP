/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:13 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 12:57:42 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void){
	val = 0;
}

Fixed::Fixed(const int nb){
	val = nb << this->bits;
}

Fixed::Fixed(const float nb){
	val = roundf(nb * (1 << this->bits));
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
	return ((float)val / (float)(roundf(1 << bits)));
}

int Fixed::toInt(void) const{
	return (val >> bits);
}

Fixed::~Fixed(void){
}

bool	operator>(const Fixed &first, const Fixed &snd){
	return first.getRawBits() > snd.getRawBits();
}

bool	operator<(const Fixed &first, const Fixed &snd){
	return first.getRawBits() < snd.getRawBits();
}

bool	operator==(const Fixed &first, const Fixed &snd){
	return first.getRawBits() == snd.getRawBits();
}

bool	operator!=(const Fixed &first, const Fixed &snd){
	return first.getRawBits() != snd.getRawBits();
}

bool	operator>=(const Fixed &first, const Fixed &snd){
	return first.getRawBits() >= snd.getRawBits();
}

bool	operator<=(const Fixed &first, const Fixed &snd){
	return first.getRawBits() <= snd.getRawBits();
}

Fixed	operator+(const Fixed &first, const Fixed &snd){
	return (first.toFloat() + snd.toFloat());

}

Fixed	operator-(const Fixed &first, const Fixed &snd){
	return (first.toFloat() - snd.toFloat());
}

Fixed	operator*(const Fixed &first, const Fixed &snd){
	return (first.toFloat() * snd.toFloat());
}

Fixed	operator/(const Fixed &first, const Fixed &snd){
	return (first.toFloat() / snd.toFloat());
}

Fixed	&Fixed::operator++(void){
	val++;
	return *this;
}

Fixed	&Fixed::operator--(void){
	val--;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	++val;
	return tmp;
}

Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	--val;
	return tmp;
}

Fixed	&Fixed::min(Fixed &first, Fixed &snd){
	if (first < snd)
		return first;
	else
		return snd;
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &snd){
	if (first < snd)
		return first;
	else
		return snd;
}

Fixed	&Fixed::max(Fixed &first, Fixed &snd){
	if (first > snd)
		return first;
	else
		return snd;
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &snd){
	if (first > snd)
		return first;
	else
		return snd;
}
