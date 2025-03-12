/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:07:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/12 12:58:24 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
		bool	guardMode;
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &toCopy);
		ScavTrap &operator=(const ScavTrap &a);
		~ScavTrap(void);

		void guardGate(void);
		void attack(const std::string &target);
};

#endif