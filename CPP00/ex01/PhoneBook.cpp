/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:36:33 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/04 11:14:48 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->currentIndex = 0;
	this->nb_contacts = 0;
}

void	PhoneBook::addContact(void)
{
	std::string	input;

	std::cout << "First Name: ";
	std::getline(std::cin, input);
	contacts[currentIndex].setFirstName(input);
	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	contacts[currentIndex].setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	contacts[currentIndex].setNickname(input);
	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	contacts[currentIndex].setPhoneNumber(input);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	contacts[currentIndex].setDarkestSecret(input);
	currentIndex = (currentIndex + 1) % 8;
	nb_contacts++;
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
	std::string	input;
	int	i = 0;

	if (nb_contacts > 0)
	{
		std::cout.width(10); std::cout << "INDEX" << "|";
		std::cout.width(10); std::cout << "FIRST NAME" << "|";
		std::cout.width(10); std::cout << "LAST NAME" << "|";
		std::cout.width(10); std::cout << "NICKNAME" << "|";
		std::cout << std::endl;

	}
	else
	{
		std::cout << "No contacts yet !" << std::endl;
		return ;
	}
	while (i < nb_contacts)
	{
		std::cout.width(10); std::cout << i + 1 << "|";
		std::cout.width(10); std::cout << truncateString(contacts[i].getFirstName()) << "|";
		std::cout.width(10); std::cout << truncateString(contacts[i].getLastName()) << "|";
		std::cout.width(10); std::cout << truncateString(contacts[i].getNickname()) << "|";
		std::cout << "\t";
		std::cout << std::endl;
		i++;
		if (i == 8)
			break ;
	}
	std::cout << "Choose a contact using index : ";
	std::getline(std::cin, input);
	if (atoi(input.c_str()) < 1 || atoi(input.c_str()) > 8)
		std::cout << "Invalid index" << std::endl;
	else if (atoi(input.c_str()) > 0 && atoi(input.c_str()) < 9 && nb_contacts < atoi(input.c_str()))
		std::cout << "Invalid index" << std::endl;
	else
		printContact(atoi(input.c_str()) - 1);
}
