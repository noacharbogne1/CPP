/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:16:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/23 17:32:46 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN A;
		std::string line = argv[1];
		A.readLine(line);
	}
	else
		std::cout << "Error: need 2 arguments" << std::endl;
}
