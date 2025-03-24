/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:42:14 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/24 09:41:02 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"){
	this->name = "Default";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << this->name << ": DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << this->name << " : DiamondTrap name constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ClapTrap(a), ScavTrap(a), FragTrap(a){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = a;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toCopy){
	if (this == &toCopy)
		return *this;
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
	std::cout << "DiamondTrap _name : " << this->name
	<< " | ClapTrap name : " << this->ClapTrap::name << std::endl;
}
