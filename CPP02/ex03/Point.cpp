/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:35:17 by noa               #+#    #+#             */
/*   Updated: 2025/03/10 18:29:35 by noa              ###   ########.fr       */
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

Fixed   Point::getY(void) const{
    return y;
}

Fixed   Point::getX(void) const{
    return x;
}

Point	&Point::operator=(const Point &a) {
	const_cast<Fixed&>(x) = a.getX();
    const_cast<Fixed&>(y) = a.getY();
    return *this;
}

Point::~Point(void){
}