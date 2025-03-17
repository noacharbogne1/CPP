/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:22 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 18:22:31 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter()
{
    std::cout << "Character default constructor called" << std::endl;
    this->name = "default Character";
    this->items = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->items[i] = NULL;
    this->_idx = 0;
    return ;
}

Character::Character(std::string name) : ICharacter()
{
    std::cout << "Character name constructor called" << std::endl;
    this->name = name;
    this->items = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->items[i] = NULL;
    this->_idx = 0;
    return ;
}

Character::Character(const Character &other) : ICharacter()
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = other;
    return ;
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character assignment operator called" << std::endl;
    for (int i = 0; i < _idx; ++i)
        delete items[i];
    delete[] items;
    this->_idx = other._idx;
    this->items = new AMateria*[_idx];
    for (int i = 0; i < _idx; i++)
        this->items[i] = other.items[i]->clone();
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < _idx; i++)
        delete items[i];
    delete[] items;
    return ;
}

std::string const &Character::getName(void) const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (this->_idx > 3)
        std::cout << "Materias' inventory of Character " << this->name << " is full !" << std::endl;
    else if (!m)
        std::cout << "Not a valid Materia to equip Character " << this->name << std::endl;
    else
    {
        if (this->inItems(m))
            this->items[_idx] = m->clone();
        else
            this->items[_idx] = m;
        this->_idx++;
    }
    if (!this->inItems(m))
        delete m;
}

void Character::unequip(int idx)
{
    if ((idx > this->_idx) || idx < 0)
        std::cout << "No Materia found at index " << idx
            << " for Character " << this->name << std::endl;
    else if (this->items[idx])
    {
        std::cout << "Character " << this->name
            << " unequiped Materia " << this->items[idx]->getType() << std::endl;
        this->items[idx] = NULL;
        this->_idx--;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > this->_idx)
    {
        std::cout << "Invalid index : no Materia to use at index "
            << idx << " for Character " << this->name << std::endl;
        return ;
    }
    else if (items[idx])
        this->items[idx]->use(target);
}

int Character::inItems(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->items[i] && this->items[i] == m)
            return 1;
    }
    return 0;
}
