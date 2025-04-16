/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:13:32 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/16 16:46:55 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

typedef struct s_Data
{
    
}   Data;

class Serializer
{
    private:
        Serializer();
    public:
        uintptr_t serialize(Data *ptr);
        Data *deserialize(uintptr_t raw);
};

#endif
