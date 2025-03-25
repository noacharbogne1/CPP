/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/25 09:56:52 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "Colors.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& other);
        Ice &operator=(const Ice &other);
        ~Ice();
        
        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif
