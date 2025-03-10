/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:35:38 by noa               #+#    #+#             */
/*   Updated: 2025/03/10 17:54:19 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(void);
        Point(float const a, float const b);
        Point(const Point &toCopy);
        ~Point(void);
        Point &operator=(const Point &a);
        Fixed getX(void) const;
        Fixed getY(void) const;
        
};

#endif