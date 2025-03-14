/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:43:54 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 14:22:04 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie	*horde = zombieHorde(5, "Les zamours");

	for (int i = 0; i < 5; i++)
		horde[i].announce();

	delete[] horde;
	return 1;
}
