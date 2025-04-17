/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:46:55 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/17 11:29:02 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>

class ScalarConverter
{
    private:
        ScalarConverter() {}
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter() {}
    public:
        static void convert(std::string &lit);
};

class ImpossibleConversionException : public std::exception
{
    public:
		ImpossibleConversionException() {}
		const char* what() const throw() {
			return "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible";
		}
		~ImpossibleConversionException() throw() {}
};

#endif
