/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 18:46:17 by ncharbog         ###   ########.fr       */
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
    this->source = new AMateria*[4];
    for(int i = 0; i < this->_idx; i++)
        this->source[i] = other.source[i]->clone();
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
    if (this->_idx > 4)
        std::cout << "The inventory of Materias is full !" << std::endl;
    else
    {
        if (this->inSource(m))
            this->source[_idx] = m->clone();
        else
            this->source[_idx] = m;
        this->_idx++;
    }
    if (!this->inSource(m))
        delete m;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < this->_idx; i++)
    {
        if (this->source[i] && this->source[i]->getType() == type)
            return this->source[i]->clone();
    }
    std::cout << "No Materia named " << type << std::endl;
    return NULL;
}

int MateriaSource::inSource(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->source[i] && this->source[i] == m)
            return 1;
    }
    return 0;
}