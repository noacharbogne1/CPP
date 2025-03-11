/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:30:12 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 11:14:40 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &w) : weapon(w){
	this->name = name;
}

void	HumanA::attack(void){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
