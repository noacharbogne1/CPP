/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/24 10:14:47 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	DiamondTrap a;
	DiamondTrap b("Giga Chadd");
	DiamondTrap c(a);

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.whoAmI();
	a.attack("some random dude");
	b.whoAmI();
	b.attack("another dude");
	c.whoAmI();
	a.takeDamage(190);
	a.beRepaired(199);
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	return (0);
}
