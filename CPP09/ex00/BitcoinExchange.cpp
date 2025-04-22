/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:18:51 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 16:33:48 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::readFile(std::ifstream &in)
{
	std::string	line;
	regex_t regex;

	memset(&regex, 0, sizeof(regex));
	const char *pattern = "^([0-9]{4})-(0[1-9]|1[0-2])-([12][0-9]|0[1-9])|"
		"^([0-9]{4})-(0[13-9]|1[0-2])-30|"
		"^([0-9]{4})-(0[13578]|1[02])-31$"
		" \\| ((0|[1-9][0-9]{0,2}|1000)(\\.[0-9]+)?)$";
	int result = regcomp(&regex, pattern, REG_EXTENDED);
	if (result) {
		char error_message[100];
		regerror(result, &regex, error_message, sizeof(error_message));
		std::cerr << "Erreur de compilation regex: " << error_message << std::endl;
		return;
	}
	while (std::getline(in, line))
	{
		int error = regexec(&regex, line.c_str(), 0, NULL, 0);
		if (error)
			std::cout << line << " error" << std::endl;
		else
			std::cout << line << " success" << std::endl;
		}
	regfree(&regex);
}
