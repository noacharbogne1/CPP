/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:18:27 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/21 15:50:29 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::ifstream in(argv[1], std::ios_base::in);
		if (!in.is_open())
		{
			std::cout << "Error: could not open file" << std::endl;
			return 0;
		}
		BitcoinExchange db;
		db.readFile(in);
	}
	else
		std::cout << "Error: could not open file." << std::endl;
	return 0;
}
