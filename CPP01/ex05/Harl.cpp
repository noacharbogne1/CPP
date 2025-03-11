/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:07:12 by noa               #+#    #+#             */
/*   Updated: 2025/03/11 12:34:14 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void){
	std::cout << "|DEBUG| I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void){
	std::cout << "|INFO| I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void){
	std::cout << "|WARNING| I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void){
	std::cout << "|ERROR| This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level){

	Harl    arg;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 5; i++){
		if (level == arr[i]){
			(arg.*funcPtr[i])();
			return ;
		}
	}
	std::cout << level << ": Invalid level identifier :(" << std::endl;
}
