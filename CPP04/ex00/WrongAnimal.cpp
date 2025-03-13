/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:17 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/13 15:45:40 by ncharbog         ###   ########.fr       */
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
    (void) other;
    return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Wrong Animal assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Wrong Animal destructor called" << std::endl;
    return ;
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "\"Wrong Animal noise\"" << std::endl;
}