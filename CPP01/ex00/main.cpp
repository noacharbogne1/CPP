/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:30:46 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 11:00:28 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie	*Sylvie = newZombie("Sylvie");

	randomChump("Pierrot");
	delete Sylvie;
	return 1;
}
