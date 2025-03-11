/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:30:02 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 12:25:46 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str){
	this->type = str;
}

void	Weapon::setType(std::string str){
	this->type = str;
}

std::string	Weapon::getType(void){
	return(type);
}
