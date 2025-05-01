/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:26:00 by ncharbog          #+#    #+#             */
/*   Updated: 2025/05/01 13:05:58 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

class OutOfBoundsException : public std::exception
{
	public :
		OutOfBoundsException() {}
		const char* what() const throw() {
			return "Index is out of bounds";
		}
		~OutOfBoundsException() throw() {}
};

template<typename T>
class Array
{
	private:
		T *arr;
		unsigned int	_size;
	public:
		Array() : arr(), _size(0) {}
		Array(unsigned int n) : _size(n) {arr = new T[n];return;}
		Array(const Array &other) {*this = other; return;}
		Array &operator=(const Array &a) {
			if (*this == a)
				return *this;
			delete arr;
			_size = a._size;
			if (a.arr)
			{
				arr = new T[_size];
				for (int i = 0; i < _size; i++)
					arr[i] = a.arr[i];
			}
			else
				arr = new T;
		}
		~Array() {
			delete[] arr;
		}

		T &operator[](unsigned int i) {
			if (i > _size)
				throw OutOfBoundsException();
			else
				return arr[i];
		}
		int	size(void) {return _size;}
};

#endif