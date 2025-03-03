/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:33 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/03 17:57:28 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->currentIndex = 0;
}

void	PhoneBook::addContact(void)
{
	std::string	input;

	std::cout << "First Name: ";
	std::cin >> input;
	contacts[currentIndex].setFirstName(input);
	std::cout << "Last Name: ";
	std::cin >> input;
	contacts[currentIndex].setLastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	contacts[currentIndex].setNickname(input);
	std::cout << "Phone Number: ";
	std::cin >> input;
	contacts[currentIndex].setPhoneNumber(input);
	std::cout << "Darkest Secret: ";
	std::cin >> input;
	contacts[currentIndex].setDarkestSecret(input);
	currentIndex = (currentIndex + 1) % 8;
}

std::string PhoneBook::truncateString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

void	PhoneBook::printContact(int index)
{
	std::cout << "First Name : " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name : " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname : " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number : " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << contacts[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContact(void)
{
	
}
