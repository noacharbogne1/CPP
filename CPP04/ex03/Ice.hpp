/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:29 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 10:27:18 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"


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
