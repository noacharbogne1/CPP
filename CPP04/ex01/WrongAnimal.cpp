/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:17 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:49:01 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Wrong Animal default constructor called" << std::endl;
	this->type = "WrongAnimal";
    return ;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Wrong Animal copy constructor called" << std::endl;
    *this = other;
    return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Wrong Animal assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Wrong Animal destructor called" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "\"Wrong Animal noise\"" << std::endl;
}