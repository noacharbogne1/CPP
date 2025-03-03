/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:45:16 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/03 17:38:12 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)  {
	this->lastName = lastName;
}

void	Contact::setNickname(std::string nickname)  {
	this->nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)  {
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)  {
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) {
	return this->firstName;
}

std::string	Contact::getLastName()  {
	return this->lastName;
}

std::string	Contact::getNickname()  {
	return this->nickname;
}

std::string	Contact::getPhoneNumber()  {
	return this->phoneNumber;
}

std::string	Contact::getDarkestSecret()  {
	return this->darkestSecret;
}
