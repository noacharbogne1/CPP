/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:53 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/13 15:15:18 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound(void) const;
};

#endif
