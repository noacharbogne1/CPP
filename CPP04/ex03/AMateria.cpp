/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:42 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 17:13:06 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << YELLOW << "AMateria" << GREY << " default constructor called" << RESET << std::endl;
    this->type = "default Materia";
    this->isNull = true;
    return ;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << YELLOW << "AMateria" << GREY << " type constructor called" << RESET << std::endl;
    this->type = type;
    this->isNull = true;
    return ;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << YELLOW << "AMateria" << GREY << " copy constructor called" << RESET << std::endl;
    *this = other;
    return ;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << YELLOW << "AMateria" << GREY << "assignment operator called" << RESET << std::endl;
    this->type = other.type;
    this->isNull = other.isNull;
    return (*this);
}

AMateria::~AMateria(void)
{
    std::cout << YELLOW << "AMateria" << GREY << " destructor called" << RESET << std::endl;
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