/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:02:58 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 16:22:05 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << name << " : FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << name << " : FragTrap name constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a.name){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = a;
}

FragTrap	&FragTrap::operator=(const FragTrap &toCopy){
	if (*this == &a)
		return *this;
	this->name = toCopy.name;
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage;
	return *this;
}

FragTrap::~FragTrap(void){
	std::cout << this->name << " : FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->name
	<< " attempted to do a high five but nobody responded :(" << std::endl;
}

void	FragTrap::attack(const std::string &target){
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->energyPoints--;
		std::cout << "FragTrap " << this->name << " attacks "
			<< target << ", causing "
			<< attackDamage << " points of damage !" << std::endl
			<< "\t-> " << this->hitPoints << " hit points left" << std::endl
			<< "\t-> " << this->energyPoints << " energy points left" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->name << " doesn't have enough energy or hit points to attack" << std::endl;
}