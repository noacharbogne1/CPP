/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:37 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 13:26:54 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

ICharacter::ICharacter(const ICharacter &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

ICharacter::~ICharacter(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}
