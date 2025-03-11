/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:10:16 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 11:06:40 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	Zombie	*horde = new Zombie[N];

	for(int i = 0; i < N; i++){
		horde[i].set_name(name);
	}
	return (horde);
}
