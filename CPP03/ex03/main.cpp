/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/13 12:04:35 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void){
	FragTrap	frag("hello");

	frag.beRepaired(100);
	DiamondTrap	trap("test");
	trap.whoAmI();
	return 0;
}
