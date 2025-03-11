/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:13:33 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 17:11:57 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &toCopy);
		ClapTrap &operator=(const ClapTrap &a);
		~ClapTrap(void);

		//setters/getters
		void setHitPoints(unsigned int amount);
		void setEnergyPoints(unsigned int amount);
		void setAttackDamage(unsigned int amount);
		unsigned int getHitPoints(void);
		unsigned int getEnergyPoints(void);

		//member functions
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif