/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:06:06 by noa               #+#    #+#             */
/*   Updated: 2025/03/05 16:33:59 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    Harl    burger;
    std::string level;
    
    while(1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, level); 
        if (std::cin.eof()){
            std::cout << "CTRL+D called" << std::endl;
            break ;
        }
        burger.complain(level);
    }
    return 1;
}
