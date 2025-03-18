/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:37:24 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 10:29:55 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "Colors.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(const Cure& other);
        Cure &operator=(const Cure &other);
        ~Cure();
        AMateria *clone(void) const;
        void use(ICharacter &target);

};

#endif
