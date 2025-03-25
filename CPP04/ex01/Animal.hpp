/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:42:23 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
	std::string	type;
    public:
	Animal(void);
	Animal(const Animal& other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	
	virtual void makeSound(void) const;
	std::string getType(void) const;
};

# include "Dog.hpp"
# include "Cat.hpp"

#endif
