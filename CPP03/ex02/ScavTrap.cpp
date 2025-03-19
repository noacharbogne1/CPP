/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:07:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 16:22:13 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->guardMode = false;
	std::cout << name << " : ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << name << " : ScavTrap name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->guardMode = false;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a.name){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = a;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &toCopy){
	if (*this == &a)
		return *this;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
	this->guardMode = toCopy.guardMode;

	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << this->name << " : ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate(void){
	if (this->guardMode == true)
		std::cout << "Guard gate mode desactivated" << std::endl;
	else
		std::cout << "Guard gate mode activated" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->energyPoints--;
		std::cout << "ScavTrap " << this->name << " attacks "
			<< target << ", causing "
			<< attackDamage << " points of damage !" << std::endl
			<< "\t-> " << this->hitPoints << " hit points left" << std::endl
			<< "\t-> " << this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " doesn't have enough energy or hit points to attack" << std::endl;
}
