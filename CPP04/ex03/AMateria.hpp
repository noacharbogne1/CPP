/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:40 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/17 10:17:39 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(const AMateria& other);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria(void);

        std::string const &getType(void) const;
        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif
