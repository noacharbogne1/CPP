/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:32 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 11:15:39 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->obj = new Brain();
	return ;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
	return ;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = other.type;
	obj = new Brain();
	*obj = *(other.obj);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete obj;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "\"Meow Meow : I'm a cat obviously\"" << std::endl;
}

void	Cat::displayObjAddress(void) const
{
	std::cout << &obj << std::endl;
}
