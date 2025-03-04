/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:36 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/04 10:45:31 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	std::string	input;

	(void) argv;
	(void) argc;
	while (1)
	{
		std::cout << "Enter command : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "CTRL+D called" << std::endl;
			break ;
		}
		if (input == "ADD" && input.length() == 3)
			phoneBook.addContact();
		else if (input == "SEARCH" && input.length() == 6)
			phoneBook.searchContact();
		else if (input == "EXIT" && input.length() == 4)
			break ;
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
