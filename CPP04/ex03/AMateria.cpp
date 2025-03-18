/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:42 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 10:27:10 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << GREY <<"AMateria default constructor called" << RESET << std::endl;
    this->type = "default Materia";
    this->isNull = true;
    return ;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << GREY << "AMateria type constructor called" << RESET << std::endl;
    this->type = type;
    this->isNull = true;
    return ;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << GREY << "AMateria copy constructor called" << RESET << std::endl;
    *this = other;
    return ;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << GREY << "AMateria assignment operator called" << RESET << std::endl;
    this->type = other.type;
    this->isNull = other.isNull;
    return (*this);
}

AMateria::~AMateria(void)
{
    std::cout << GREY << "AMateria destructor called" << RESET << std::endl;
    return ;
}

std::string const &AMateria::getType(void) const
{
    return this->type;
}

void  AMateria::setIsNull(bool m)
{
    this->isNull = m;
}

bool const &AMateria::getIsNull(void) const
{
    return this->isNull;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}