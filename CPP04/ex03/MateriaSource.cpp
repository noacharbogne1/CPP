/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 13:48:37 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}
