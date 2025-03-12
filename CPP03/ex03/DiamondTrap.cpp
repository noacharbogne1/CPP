/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:42:14 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/12 14:31:25 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name){
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;

}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ClapTrap(a.name), ScavTrap(a.name), FragTrap(a.name){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = a;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toCopy){
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;

	return *this;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << this->name << " : DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap _name : " << this->_name
	<< " | ClapTrap name : " << this->name << std::endl;
}
