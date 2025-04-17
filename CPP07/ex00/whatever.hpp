/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:22:08 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/17 13:37:30 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	&min(T &a, T &b)
{
	if (a > b)
		return b;
	else if (a < b)
		return a;
	return b;
}

template <typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
	return b;
}

#endif