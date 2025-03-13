/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:21 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/13 15:46:24 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected :
		std::string	type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal &operator=(const WrongAnimal &other);
        ~WrongAnimal();
		void makeSound(void);
};

# include "WrongCat.hpp"

#endif
