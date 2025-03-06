/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:16:31 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/06 10:40:43 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	getLevel(std::string str){

	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 5; i++){
		if (str == arr[i])
			return i;
	}
	return -1;
}

int	main(int argc, char **argv){

	if (argc == 2)
	{
		Harl	burger;
		std::string str = argv[1];
		int	level = getLevel(str);
		if (level >= 0)
			burger.complain(level);
		else
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	else
		std::cout << "Invalid call to harlFilter" << std::endl;
	return 0;
}
