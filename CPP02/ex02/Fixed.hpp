/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:19 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/10 12:19:34 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int val;
		static const int bits;
	public:
	Fixed(void);
	~Fixed(void);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed &toCopy);
	
	//getter / setter
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	// conversion
	float toFloat(void) const;
	int toInt(void) const;

	// comparision operators
	friend bool	operator>(const Fixed &first, const Fixed &snd);
	friend bool	operator<(const Fixed &first, const Fixed &snd);
	friend bool	operator==(const Fixed &first, const Fixed &snd);
	friend bool	operator!=(const Fixed &first, const Fixed &snd);
	friend bool	operator<=(const Fixed &first, const Fixed &snd);
	friend bool	operator>=(const Fixed &first, const Fixed &snd);
	
	// arithmetic operators
	friend Fixed	operator+(const Fixed &first, const Fixed &snd);
	friend Fixed	operator-(const Fixed &first, const Fixed &snd);
	friend Fixed	operator*(const Fixed &first, const Fixed &snd);
	friend Fixed	operator/(const Fixed &first, const Fixed &snd);
	
	// in/decresing operators
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	
	// min/max
	static Fixed	&min(Fixed &first, Fixed &snd);
	static const Fixed	&min(const Fixed &first, const Fixed &snd);
	static Fixed	&max(Fixed &first, Fixed &snd);
	static const Fixed	&max(const Fixed &first, const Fixed &snd);
	
	// other overloading
	friend std::ostream &operator<<(std::ostream &os, const Fixed &a);
	Fixed &operator=(const Fixed &a);
};

#endif