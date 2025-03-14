/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:53 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 11:15:24 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *obj;
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
		void displayObjAddress(void) const;
		void makeSound(void) const;
};

#endif
