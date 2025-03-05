/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:29:24 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/05 11:53:43 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cstddef>

class Weapon
{
	private:
	std::string type;
	public:
		void setType(std::string str);
		Weapon(std::string str);
		std::string getType(void);
};

# include "HumanA.hpp"
# include "HumanB.hpp"

#endif