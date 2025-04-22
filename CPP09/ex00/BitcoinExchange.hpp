/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:18:45 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 12:47:25 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <regex.h>
# include <cstring>

class BitcoinExchange
{
	private:
		std::map<std::string, int> _bd;
	public:
		BitcoinExchange() {}
		void readFile(std::ifstream &in);

};

#endif