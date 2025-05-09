/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:58:58 by noa               #+#    #+#             */
/*   Updated: 2025/03/18 11:26:45 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Bsp.hpp"

int main(void){
	Point   a(0, 0);
	Point   b(10, 30);
	Point   c(20, 0);
	Point   p(10, 15);

	if (bsp(a, b, c, p) == true)
		std::cout << "Point p is inside the triangle" << std::endl;
	else if (bsp(a, b, c, p) == false)
		std::cout << "Point p is outside the triangle" << std::endl;
}
