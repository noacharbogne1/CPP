/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:18:51 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/23 15:09:18 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::saveData(void)
{
	std::ifstream	data("data.csv", std::ios_base::in);
	std::string	line;

	if (!data.is_open())
	{
		std::cout << "Error: could not open data.csv" << std::endl;
		return ;
	}
	while (std::getline(data, line))
	{
		if (line == "date,exchange_rate")
			continue ;
		float value = atof(line.substr(11, line.size() - 11).c_str());
		_bd.insert(std::make_pair(line.substr(0, 10), value));
	}
}

void	BitcoinExchange::readFile(std::ifstream &in)
{
	std::string	line;
	regex_t regex;

	memset(&regex, 0, sizeof(regex));
	const char *pattern = "^([0-9]{4})-(0[1-9]|1[0-2])-([12][0-9]|0[1-9])|"
		"^([0-9]{4})-(0[13-9]|1[0-2])-30|"
		"^([0-9]{4})-(0[13578]|1[02])-31$"
		" \\| [+-]?([0-9]+(\\.[0-9]*)?)([eE][+-]?[0-9]+)?$";
	regcomp(&regex, pattern, REG_EXTENDED);
	while (std::getline(in, line))
	{
		if (line == "date | value")
			continue ;
		int error = regexec(&regex, line.c_str(), 0, NULL, 0);
		int value = atof(line.substr(13, line.size() - 13).c_str());
		if (error || value < 0 || value > 1000 || line[10] != ' '
			|| line[11] != '|' || line[12] != ' ' || !isdigit(line[13]))
			std::cout << "bad input => " << line << std::endl;
		else
			compareData(line);
	}
	regfree(&regex);
}

std::string	BitcoinExchange::decrementTime(std::string &line)
{
	struct tm date;
	time_t timestamp;

	date.tm_year = atoi(line.substr(0, 4).c_str()) - 1900;
	date.tm_mon = atoi(line.substr(5, 2).c_str()) - 1;
	date.tm_mday = atoi(line.substr(8, 2).c_str());
	date.tm_hour = 12;
	date.tm_min = 0;
	date.tm_sec = 0;
	date.tm_isdst = -1;

	date.tm_mday--;
	timestamp = mktime(&date);
	if (timestamp == -1)
	{
		std::cerr << "Error: invalid date." << std::endl;
		return "";
	}
	struct tm *time = gmtime(&timestamp);
	char tmp[11];

	strftime(tmp, sizeof(tmp), "%Y-%m-%d", time);
	std::string res = tmp;
	return res;
}

void	BitcoinExchange::compareData(std::string &line)
{
	std::string date = line.substr(0, 10);

	while (_bd.count(date) == 0 && date != "2009-01-02")
	{
		date = decrementTime(date);
		if (date == "")
			return ;
	}
	if (date == "2009-01-02")
		std::cerr << "Error: date not found." << std::endl;
	else
	{
		std::string value = line.substr(13, line.size() - 13);
		std::cout << line.substr(0, 10) << " => " << value << " = "
			<< atof(value.c_str()) * _bd[date] << std::endl;
		return ;
	}
}
