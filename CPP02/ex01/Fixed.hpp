/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:19 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 12:54:23 by ncharbog         ###   ########.fr       */
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
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator=(const Fixed &a);
		friend std::ostream &operator<<(std::ostream &os, const Fixed &a);
};

#endif