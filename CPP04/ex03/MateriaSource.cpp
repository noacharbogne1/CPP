/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 12:13:18 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    this->source = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->source[i] = NULL;
    this->_idx = 0;
    this->full = false;
    return ;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "Assignment operator called" << std::endl;
    for (int i = 0; i < _idx; ++i)
        delete source[i];
    delete[] source;
    this->_idx = other._idx;
    this->full = other.full;
    this->source = new AMateria*[4];
    int i = 0;
    while (i < 4)
    {
        if (i > this->_idx && this->full == false)
            break;
        this->source[i] = other.source[i]->clone();
        i++;
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource Destructor called" << std::endl;
    for (int i = 0; i < _idx; i++)
        delete source[i];
    delete[] source;
    _idx = 0;
    return ;
}

void    MateriaSource::learnMateria(AMateria *m)
{
    if (this->_idx == 4)
        this->_idx = 0;
    if (this->source[_idx])
        delete this->source[_idx];
    this->source[_idx] = m->clone();
    this->_idx = (this->_idx + 1) % 4;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    AMateria *toCreate;
    
    if (type == "cure")
        toCreate = new Cure();
    else if (type == "ice")
        toCreate = new Ice();
    else
    {
        std::cout << "No Materia named " << type << std::endl;
        return NULL;
    }
    return (toCreate);
}