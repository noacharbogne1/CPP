/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:22 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 09:21:29 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter()
{
    std::cout << BLUE << "Character" << GREY << " default constructor called" << RESET << std::endl;
    this->name = "Default";
    this->items = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->items[i] = NULL;
    this->_idx = 0;
    return ;
}

Character::Character(std::string name) : ICharacter()
{
    std::cout << BLUE << "Character" << GREY << " name constructor called" << RESET << std::endl;
    this->name = name;
    this->items = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->items[i] = NULL;
    this->_idx = 0;
    return ;
}

Character::Character(const Character &other) : ICharacter()
{
    std::cout << BLUE << "Character" << GREY << " copy constructor called" << RESET << std::endl;
    this->_idx = 0;
    *this = other;
    return ;
}

Character &Character::operator=(const Character &other)
{
    std::cout << BLUE << "Character" << GREY << " assignment operator called" << RESET << std::endl;
    if (this == &other)
        return *this;
    this->name = other.name;
    if (this->_idx > 0)
    {
        for (int i = 0; i < this->_idx; ++i)
            delete items[i];
        delete[] items;
    }
    this->_idx = other._idx;
    this->items = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        this->items[i] = NULL;
    for (int i = 0; i < 4; i++)
    {
        if (other.items[i] != NULL)
        {
            this->items[i] = other.items[i]->clone();
            this->items[i]->setIsNull(other.items[i]->getIsNull());
        }
    }
    return *this;
}

Character::~Character(void)
{
    std::cout << BLUE << "Character" << GREY << " destructor called" << RESET << std::endl;
    for (int i = 0; i < this->_idx; i++)
        delete this->items[i];
    delete[] this->items;
    return ;
}

std::string const &Character::getName(void) const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    if (this->_idx > 3)
        std::cout << RED << "Materias' inventory of Character "
            << this->name << " is full !" << RESET << std::endl;
    else if (!m)
        std::cout << RED << "Not a valid Materia to equip Character "
            << this->name << RESET << std::endl;
    else
    {
        if (this->inItems(m))
            this->items[_idx] = m->clone();
        else
            this->items[_idx] = m;
        this->items[_idx]->setIsNull(false);
        std::cout << GREEN << "Character " << this->name
            << " equiped Materia of type " << this->items[_idx]->getType()
            << " at index [" << this->_idx << "/3]" << RESET << std::endl;
        this->_idx++;
    }
    if (!this->inItems(m))
        delete m;
}

void Character::unequip(int idx)
{
    if ((idx >= this->_idx) || idx < 0)
        std::cout << RED << "No Materia to unequip at index " << idx
            << " for Character " << this->name << RESET << std::endl;
    else if (this->items[idx] && !this->items[idx]->getIsNull())
    {
        std::cout << GREEN << "Character " << this->name
            << " unequiped Materia " << this->items[idx]->getType()
            << " at index [" << idx << "/3]" << RESET << std::endl;
        this->items[idx]->setIsNull(true);
    }
    else
        std::cout << RED << "Materia at index [" << idx << "/3]"<< " of Character "
            << this->name << " is already unequiped" << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= this->_idx)
    {
        std::cout << RED << "Invalid index : no Materia to use at index "
            << idx << " for Character " << this->name << RESET << std::endl;
        return ;
    }
    else if (this->items[idx] && this->items[idx]->getIsNull() == false)
        this->items[idx]->use(target);
    else
        std::cout << RED << "No Materia found at index " << idx
            << " for Character " << this->name << RESET << std::endl;
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
