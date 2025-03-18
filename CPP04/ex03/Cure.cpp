/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:22 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 10:30:34 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
    std::cout << GREY << "Cure default constructor called" << RESET << std::endl;
    this->type = "cure";
    return ;
}

Cure::Cure(const Cure &other) : AMateria()
{
    std::cout << GREY << "Cure copy constructor called" << RESET << std::endl;
    *this = other;
    return ;
}

Cure &Cure::operator=(const Cure &other)
{
    std::cout << GREY << "Cure assignment operator called" << RESET << std::endl;
    this->type = other.type;
    return (*this);
}

Cure::~Cure(void)
{
    std::cout << GREY << "Cure destructor called" << RESET << std::endl;
    return ;
}

AMateria    *Cure::clone(void) const
{
    AMateria    *clone = new Cure();

    return clone;
}

void Cure::use(ICharacter &target)
{
    std::cout << GREEN << "Cure:\"* heals "
    << target.getName() << "'s wounds *\"" << RESET << std::endl;
}
