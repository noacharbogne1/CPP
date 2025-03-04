/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:31 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/04 10:58:55 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <cstdlib>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		currentIndex;
		int		nb_contacts;
	public:
		PhoneBook(void);
		void addContact(void);
		void searchContact(void);
		void printContact(int index);
		std::string truncateString(std::string str);
};

#endif