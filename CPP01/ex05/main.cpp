/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:06:06 by noa               #+#    #+#             */
/*   Updated: 2025/03/11 12:33:41 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
	Harl	burger;

	burger.complain("DEBUG");
	burger.complain("INFO");
	burger.complain("WARNING");
	burger.complain("ERROR");
	return 1;
}
