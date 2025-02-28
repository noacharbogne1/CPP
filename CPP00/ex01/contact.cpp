/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:45:16 by ncharbog          #+#    #+#             */
/*   Updated: 2025/02/28 16:29:16 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	set_contact(void)
{
	std::string	input;

	std::cout << "New contact :" << std::endl;
	std::cout << "First name : ";
	std::cin >> input;
	contact[index].first_name = input;
	// fill the tab
	std::cout << std::endl;
	std::cout << "Last name : ";
	std::cin >> input;
	//fill the tab
	std::cout << std::endl;
	std::cout << "Nickname : ";
	std::cin >> input;
	//fill the tab
	std::cout << std::endl;
	std::cout << "Phone number : ";
	std::cin >> input;
	//fill the tab
	std::cout << std::endl;
	std::cout << "Darkest secret : ";
	std::cin >> input;
	//fill the tab
	std::cout << std::endl;
}
