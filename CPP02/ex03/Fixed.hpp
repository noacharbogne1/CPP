/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:19 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 11:14:54 by ncharbog         ###   ########.fr       */
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
		Fixed(const Fixed &toCopy);
		Fixed &operator=(const Fixed &a);
		~Fixed(void);

		// other constructors
		Fixed(const int nb);
		Fixed(const float nb);

		//getter / setter
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// conversion
		float toFloat(void) const;
		int toInt(void) const;

		// comparision operators
		bool	operator>(const Fixed &snd);
		bool	operator<(const Fixed &snd);
		bool	operator==(const Fixed &snd);
		bool	operator!=(const Fixed &snd);
		bool	operator<=(const Fixed &snd);
		bool	operator>=(const Fixed &snd);

		// arithmetic operators
		Fixed	operator+(const Fixed &snd);
		Fixed	operator-(const Fixed &snd);
		Fixed	operator*(const Fixed &snd);
		Fixed	operator/(const Fixed &snd);

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

	};

std::ostream &operator<<(std::ostream &os, const Fixed &a);

#endif