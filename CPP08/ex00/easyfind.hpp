/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:54:32 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/18 13:14:21 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iterator>

class ValueNotFoundException : public std::exception
{
	public :
		ValueNotFoundException() {}
		const char* what() const throw() {
			return "Value not found in the container";
		}
		~ValueNotFoundException() throw() {}
};

template<typename T>
int	easyfind(T &container, int nb)
{
	typename T::iterator iter;
	for (iter = container.begin(); iter != container.end(); iter++)
	{
		if (*iter == nb)
			return *iter;
	}
	throw ValueNotFoundException();
	return 0;
}

#endif