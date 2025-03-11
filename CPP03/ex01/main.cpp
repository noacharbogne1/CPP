/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 16:55:36 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	a("Chien méchant");

	a.attack("Petit enfant");
	a.takeDamage(8);
	a.beRepaired(2);
	a.takeDamage(4);
	a.beRepaired(2);
	a.attack("Petit enfant");
	a.takeDamage(4);
	return 0;
}
