/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:24 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/13 12:06:49 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	this->name = "Default";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << name << " : default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << name << " : name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy){
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &a){
	std::cout << "Copy assignment operator called" << std::endl;
	name = a.name;
	hitPoints = a.hitPoints;
	energyPoints = a.energyPoints;
	attackDamage = a.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void){
	std::cout << this->name << " : destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks "
			<< target << ", causing "
			<< attackDamage << " points of damage !" << std::endl
			<< this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy or hit points to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " took " << amount
		<< " point of damage. " << std::endl
		<< this->hitPoints << " hit points left" << std::endl
		<< this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead, he can't take more damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name
			<< " repaired himself and gained " << amount
			<< " hit points" << std::endl
			<< this->hitPoints <<  " hit points left" << std::endl
			<< this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy or hit points to get repaired" << std::endl;
}
