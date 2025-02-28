/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:08:39 by ncharbog          #+#    #+#             */
/*   Updated: 2025/02/28 14:15:14 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char **argv)
{
	if (argc > 1){
		for (int i  = 1; argv[i]; i++){
			std::string s = argv[i];
			std::transform(s.begin(), s.end(), s.begin(), ::toupper);
			std::cout << s;
		}
		std::cout << std::endl;
	}
	else{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
