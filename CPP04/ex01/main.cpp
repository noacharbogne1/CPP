/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:12 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:41:44 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "// Testing the deep copy //" << std::endl << std::endl;
	const Dog a;
	const Dog b = a;
	const Cat c;
	const Cat d(c);

	a.displayObjAddress();
	b.displayObjAddress();
	c.displayObjAddress();
	d.displayObjAddress();
	std::cout << std::endl;

	std::cout << "// Testing the allocation //" << std::endl << std::endl;
	const Animal *array[10];
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Animal : Dog : number " << i << std::endl;
		array[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << "Animal : Cat : number " << i << std::endl;
		array[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Animal : delete : number " << i << std::endl;
		delete array[i];
	}
	std::cout << std::endl;
	return 0;
}