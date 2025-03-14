/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:29:24 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/14 14:30:16 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <cstddef>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string str);
		void setType(std::string str);
		std::string const &getType(void);
};

# include "HumanA.hpp"
# include "HumanB.hpp"

#endif