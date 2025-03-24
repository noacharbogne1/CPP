/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/24 09:11:50 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void){
	ScavTrap	derived("Roger");
	FragTrap	otherDerived("Ananas");
	FragTrap	copy(otherDerived);
	ClapTrap	base("Annie");

	derived.attack("Artichaut");
	otherDerived.attack("Artichaut");
	derived.takeDamage(20);
	otherDerived.takeDamage(60);
	otherDerived.beRepaired(5);
	otherDerived.takeDamage(50);
	otherDerived.beRepaired(60);
	base.takeDamage(5);
	copy.takeDamage(1000);
	return 0;
}
