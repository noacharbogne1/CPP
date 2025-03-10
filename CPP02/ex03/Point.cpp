/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:35:17 by noa               #+#    #+#             */
/*   Updated: 2025/03/10 17:05:26 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0){
}

Point::Point(const float a, const float b) : x(a), y(b){
}

Point::Point(const Point &toCopy){
	*this = toCopy;
}

int   Point::getY(void) const{
    return y.getRawBits();
}

int   Point::getX(void) const{
    return x.getRawBits();
}

Point	&Point::operator=(const Point &a) {
	const_cast<Fixed&>(x) = a.getX();
    const_cast<Fixed&>(y) = a.getY();
    return *this;
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    Fixed   abc;
    Fixed   pab;
    Fixed   pbc;
    Fixed   pac;
    
    abc.setRawBits((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - b.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
    pab.setRawBits((point.getX() * (a.getY() - b.getY()) + a.getX() * (b.getY() - a.getY()) + b.getX() * (point.getY() - a.getY())) / 2);
    pbc.setRawBits((point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - b.getY()) + c.getX() * (point.getY() - b.getY())) / 2);
    pac.setRawBits((point.getX() * (a.getY() - c.getY()) + a.getX() * (c.getY() - a.getY()) + c.getX() * (point.getY() - a.getY())) / 2);
    if (abc == (pab + pbc + pac))
        return true;
    return false;
}
