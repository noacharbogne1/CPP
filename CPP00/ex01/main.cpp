/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:36 by ncharbog          #+#    #+#             */
/*   Updated: 2025/02/28 15:47:39 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(int argc, char **argv)
{
	std::string	arg;

	if (argc == 2)
	{
		arg = argv[1];
		if (arg == "ADD")
		else if (arg == "SEARCH")
		else if (arg == "EXIT")
			return 0;
		else
			std::cout << "Invalid command" << std::endl;
	}
	else
		std::cout << "Invalid number of arguments" << std::endl;
	return 0;
}
