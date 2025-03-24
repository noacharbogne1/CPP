/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/24 09:09:48 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	ScavTrap	derived("Roger");
	ScavTrap	copy(derived);
	ClapTrap	base("Annie");

	derived.attack("random");
	derived.takeDamage(20);
	derived.takeDamage(20);
	derived.takeDamage(20);
	derived.takeDamage(10);
	derived.takeDamage(20);
	derived.beRepaired(10);
	derived.takeDamage(50);
	derived.attack("random");
	base.takeDamage(5);
	copy.attack("lol");
	return 0;
}
