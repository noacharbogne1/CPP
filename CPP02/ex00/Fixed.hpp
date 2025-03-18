/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:56:19 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 11:28:09 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif