/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:36 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/03 17:50:29 by ncharbog         ###   ########.fr       */
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
		std::cin >> input;
		if (std::cin.eof())
		{
			std::cout << "CTRL+D called" << std::endl;
			break ;
		}

		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
