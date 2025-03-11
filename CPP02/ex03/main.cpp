/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:58:58 by noa               #+#    #+#             */
/*   Updated: 2025/03/11 12:58:29 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   getArea(Point const a, Point const b, Point const c){
	float   result;

	result = ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
		+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
		+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2);
	if (result < 0)
		result = result * -1;
	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	float   abc;
	float   pab;
	float   pbc;
	float   pac;

	abc = getArea(a, b, c);
	pab = getArea(point, a, b);
	pbc = getArea(point, b, c);
	pac = getArea(point, a, c);
	if (pab == 0 || pbc == 0 || pac == 0)
		return false;
	if (abc == (pab + pbc + pac))
		return true;
	return false;
}

int main(void){
	Point   a(0, 0);
	Point   b(10, 30);
	Point   c(20, 0);
	Point   p(1, 0);

	if (bsp(a, b, c, p) == true)
		std::cout << "Point p is inside the triangle" << std::endl;
	else if (bsp(a, b, c, p) == false)
		std::cout << "Point p is outside the triangle" << std::endl;
}
