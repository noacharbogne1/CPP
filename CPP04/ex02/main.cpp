/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:12 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 13:00:03 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	//const Animal test;
	const Dog a;
	const Cat b;

	std::cout << a.getType() << std::endl;
	a.makeSound();
	std::cout << b.getType() << std::endl;
	b.makeSound();

	return 0;
}