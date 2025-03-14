/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:30 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 13:27:03 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

IMateriaSource::IMateriaSource(const IMateriaSource &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}
