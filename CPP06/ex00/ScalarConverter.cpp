/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:46:52 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/16 16:32:03 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool    isInt(const std::string &lit)
{
    if (lit.size() < 1)
        return false;
    for (size_t i = 0; i < lit.size(); i++)
    {
        if (i == 0 && (lit[i] == '-' || lit[i] == '+'))
            continue ;
        if (!isdigit(lit[i]))
            return false;
    }
    return true;
}

static bool    isFloat(const std::string &lit)
{
    bool    point = false;

    if (lit.size() < 1)
        return false;
    for (size_t i = 0; i < lit.size(); i++)
    {
        if (i == 0 && (lit[i] == '-' || lit[i] == '+'))
            continue ;
        if (lit[i] == '.')
        {
            if (point == true)
                return false;
            point = true;
        }
        else if (!isdigit(lit[i]))
            return false;
    }
    return point;
}

static void infNan(std::string lit)
{
    if (lit == "-inff" || lit == "+inff" || lit == "nanf")
        std::cout << "char: conversion impossible" << std::endl
            << "int: conversion impossible" << std::endl
            << "float: " << lit << std::endl
            << "double: " << lit.substr(0, lit.size()-1) << std::endl;
    else if (lit == "-inf" || lit == "+inf" || lit == "nan")
        std::cout << "char: conversion impossible" << std::endl
            << "int: conversion impossible" << std::endl
            << "float: " << lit + "f" << std::endl
            << "double: " << lit << std::endl;
}

void    ScalarConverter::convert(std::string &lit)
{
    long double  conv;
    long double  ref;

    conv = 0;
    ref = 0;
    if (lit == "-inff" || lit == "+inff" || lit == "nanf")
        return infNan(lit);
    else if (lit == "-inf" || lit == "+inf" || lit == "nan")
        return infNan(lit);
    if (lit[lit.length() - 1] == 'f')
        lit = lit.substr(0, lit.size()-1);
    if (isFloat(lit) || isInt(lit))
    {
        std::stringstream ss(lit);
        ss >> conv;
        if (ss.fail())
            throw ImpossibleConversionException();
    }
    else if (lit.size() == 1)
        conv = static_cast<char>(lit[0]);
    else
        throw ImpossibleConversionException();

    ref = conv;
    if (static_cast<int>(conv) > 255 || static_cast<int>(conv) < 0)
        std::cout << "char: impossible" << std::endl;
    else if (isprint(static_cast<int>(conv)))
        std::cout << "char: " << static_cast<char>(conv) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;

    if (ref >= std::numeric_limits<int>::min() && ref <= std::numeric_limits<int>::max())
        std::cout << "int: " << static_cast<int>(conv) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;

    if (ref >= -std::numeric_limits<float>::max() && ref <= std::numeric_limits<float>::max())
        std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(conv) << "f" << std::endl;
    else if (ref < -std::numeric_limits<float>::max())
        std::cout << "float: -inff" << std::endl;
    else
        std::cout << "float: +inff" << std::endl;

    if (ref >= -std::numeric_limits<double>::max() && ref <= std::numeric_limits<double>::max())
        std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(conv) << std::endl;
    else if (ref < -std::numeric_limits<double>::max())
        std::cout << "float: -inf" << std::endl;
    else
        std::cout << "float: +inf" << std::endl;
}
