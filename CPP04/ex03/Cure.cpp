/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:22 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 10:23:14 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
    std::cout << "Cure default constructor called" << std::endl;
    this->type = "cure";
    return ;
}

Cure::Cure(const Cure &other) : AMateria()
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
    return ;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
    return ;
}

AMateria    *Cure::clone(void) const
{
    AMateria    *clone = new Cure();

    return clone;
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure:\"* heals "
    << target.getName() << "'s wounds *\"" << std::endl;
}
