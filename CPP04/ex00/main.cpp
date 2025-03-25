/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:12 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:28:23 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "//Examples of good inheritance pratice//" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout << std::endl << "//Examples of bad inheritance pratice//" << std::endl << std::endl;
	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();
	WrongCat good;
	std::cout << iWrong->getType() << " " << std::endl;
	iWrong->makeSound();
	metaWrong->makeSound();
	good.makeSound();
	delete metaWrong;
	delete iWrong;

	return 0;
}