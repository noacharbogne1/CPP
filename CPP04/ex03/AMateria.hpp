/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:40 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/18 10:25:32 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Colors.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
        bool    isNull;
    public:
        AMateria(void);
        AMateria(std::string const &type);
        AMateria(const AMateria& other);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria(void);

        std::string const &getType(void) const;
        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target);
        bool const &getIsNull(void) const;
        void  setIsNull(bool m);
};

#endif
