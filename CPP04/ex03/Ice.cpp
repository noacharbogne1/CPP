/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:27 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:55:23 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
    std::cout << WHITE << "Ice" << GREY << " default constructor called" << RESET << std::endl;
    this->type = "ice";
    return ;
}

Ice::Ice(const Ice &other) : AMateria()
{
    std::cout << WHITE << "Ice" << GREY << " copy constructor called" << RESET << std::endl;
    *this = other;
    return ;
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << WHITE << "Ice" << GREY << " assignment operator called" << RESET << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

Ice::~Ice(void)
{
    std::cout << WHITE << "Ice" << GREY << " destructor called" << RESET << std::endl;
    return ;
}

AMateria    *Ice::clone(void) const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << GREEN << "Ice :\"* shoots an ice bolt at "
        << target.getName() << " *\"" << RESET << std::endl;
}