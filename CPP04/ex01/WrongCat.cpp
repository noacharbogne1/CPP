/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:58 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:47:22 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
    return ;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "\"Nobody will hear my WrongCat noise...\"" << std::endl;
}
