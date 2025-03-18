/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:27 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 10:31:19 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
    std::cout << GREY << "Ice default constructor called" << RESET << std::endl;
    this->type = "ice";
    return ;
}

Ice::Ice(const Ice &other) : AMateria()
{
    std::cout << GREY << "Ice copy constructor called" << RESET << std::endl;
    *this = other;
    return ;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << GREY << "Ice assignment operator called" << RESET << std::endl;
    this->type = other.type;
    return (*this);
}

Ice::~Ice(void)
{
    std::cout << GREY << "Ice destructor called" << RESET << std::endl;
    return ;
}

AMateria    *Ice::clone(void) const
{
    AMateria    *clone = new Ice();

    return clone;
}

void Ice::use(ICharacter &target)
{
    std::cout << GREEN << "Ice :\"* shoots an ice bolt at "
        << target.getName() << " *\"" << RESET << std::endl;
}