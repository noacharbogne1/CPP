/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:18:45 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/23 14:50:24 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <regex.h>
# include <cstring>
# include <cstdlib>
# include <string>
# include <sstream>
# include <ctime>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _bd;
	public:
		BitcoinExchange() {}
		void saveData(void);
		void readFile(std::ifstream &in);
		void compareData(std::string &line);
		std::string decrementTime(std::string &line);
};

#endif