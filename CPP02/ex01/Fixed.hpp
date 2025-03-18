/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:19 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 11:04:02 by ncharbog         ###   ########.fr       */
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

		// getters/setters
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// conversions
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &a);

#endif