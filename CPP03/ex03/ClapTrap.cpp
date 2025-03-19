/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:24 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 16:22:25 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	this->name = "Default";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << name << " : ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << this->name << " : ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy){
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &a){
	std::cout << "Copy assignment operator called" << std::endl;
	if (*this == &a)
		return *this;
	name = a.name;
	hitPoints = a.hitPoints;
	energyPoints = a.energyPoints;
	attackDamage = a.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void){
	std::cout << this->name << " : ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks "
			<< target << ", causing "
			<< attackDamage << " points of damage !" << std::endl
			<< "\t-> " << this->hitPoints << " hit points left" << std::endl
			<< "\t-> " << this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy or hit points to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " took " << amount
		<< " point of damage. " << std::endl
		<< "\t-> " << this->hitPoints << " hit points left" << std::endl
		<< "\t-> " << this->energyPoints << " energy points left" << std::endl;
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
			<< "\t-> " << this->hitPoints <<  " hit points left" << std::endl
			<< "\t-> " << this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy or hit points to get repaired" << std::endl;
}
