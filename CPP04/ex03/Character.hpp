/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:47:20 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 10:27:27 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Colors.hpp"

class Character : public ICharacter
{
    private :
        AMateria **items;
        int _idx;
    public:
        Character(void);
        Character(std::string name);
        Character(const Character& other);
        Character &operator=(const Character &other);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
        int inItems(AMateria *m);
};

#endif
