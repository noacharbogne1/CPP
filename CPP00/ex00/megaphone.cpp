/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:08:39 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 10:42:00 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv){
	char c;

	if (argc > 1){
		for (int i = 1; argv[i]; i++){
			for(int j = 0; argv[i][j]; j++){
				c = std::toupper(argv[i][j]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	else{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
