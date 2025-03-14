/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:22 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 16:59:22 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Character default constructor called" << std::endl;
    this->name = "default";
    this->items = NULL;
    this->_idx = 0;
    return ;
}

Character::Character(std::string name)
{
    std::cout << "Character name constructor called" << std::endl;
    this->name = name;
    this->items = NULL;
    this->_idx = 0;
    return ;
}

Character::Character(const Character &other)
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
    for (int i = 0; i < _idx; ++i)
        delete items[i];
    delete[] items;
    return ;
}

void Character::equip(AMateria *m)
{
    this->_idx++;
    if (this->_idx > 3)
    {
        std::cout << "Items of Character " << this->name << " are full !" << std::endl;
        return ;
    }
    if (m->getType() == "ice")
        this->items[_idx] = new Ice();
    else if (m->getType() == "cure")
        this->items[_idx] = new Cure();
}
void Character::unequip(int idx)
{
    this->items[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
        this->items[idx]->use(target);
    else
        std::cout << "Invalid index" << std::endl;
}
