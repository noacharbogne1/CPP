/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/12 10:59:36 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	ScavTrap	derived("Roger");
	ClapTrap	base("Annie");

	derived.attack("random");
	derived.takeDamage(20);
	derived.takeDamage(20);
	derived.takeDamage(20);
	derived.takeDamage(10);
	derived.takeDamage(20);
	derived.beRepaired(10);
	derived.takeDamage(20);
	derived.attack("random");
	base.takeDamage(5);
	return 0;
}
