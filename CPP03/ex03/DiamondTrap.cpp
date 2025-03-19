/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:42:14 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 16:22:33 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
	this->name = "Default";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPointsConst;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << name << " : DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPointsConst;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << name << " : DiamondTrap name constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : ClapTrap(a.name), ScavTrap(a.name), FragTrap(a.name){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = a;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toCopy){
	if (*this == &a)
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
