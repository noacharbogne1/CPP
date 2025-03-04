/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:31:12 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/04 15:39:57 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class	Zombie
{
	private:
	std::string name;
	public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif