/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:24 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 17:12:42 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::setHitPoints(unsigned int amount){
	this->hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount){
	this->energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount){
	this->attackDamage = amount;
}

unsigned int	ClapTrap::getHitPoints(void){
	return this->hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void){
	return this->energyPoints;
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
		std::cout << "ClapTrap doesn't have enough energy or hit points to attack" << std::endl;
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
		std::cout << "ClapTrap is already dead" << std::endl;
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
		std::cout << "ClapTrap doesn't have enough energy or hit points to get repaired" << std::endl;
}
