/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:42:47 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/17 14:22:33 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
	f(arr[i]);
}

template<typename T>
void	f(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	func(T &element)
{
	std::cout << element << " different template function" <<std::endl;
}

#endif