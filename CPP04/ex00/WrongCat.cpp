/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:58 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/13 15:45:24 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "Default constructor called" << std::endl;
	this->type = "WrongCat";
    return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void	WrongCat::makeSound(void)
{
	std::cout << "\"Nobody will hear my WrongCat noise...\"" << std::endl;
}
