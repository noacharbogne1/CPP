/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:42 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 10:08:40 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "AMateria default constructor called" << std::endl;
    this->type = "default Materia";
    return ;
}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria type constructor called" << std::endl;
    this->type = type;
    return ;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
    return ;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
    return ;
}

std::string const &AMateria::getType(void) const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    //std::cout << "Materia used on " << target.getType() << std::endl;
}