/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:27 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 15:07:25 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    std::cout << "Ice default constructor called" << std::endl;
    this->type = "ice";
    return ;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
    return ;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
    return ;
}

AMateria    *Ice::clone(void) const
{
    AMateria    *clone = new Ice();

    return clone;
}

void Ice::use(ICharacter &target)
{
    std::cout << "Ice :\"* shoots an ice bolt at "
        << target.getName() << " *\"" << std::endl;
}