/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noa <noa@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:58:58 by noa               #+#    #+#             */
/*   Updated: 2025/03/10 17:15:50 by noa              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
    Point   a(0, 0);
    Point   b(10, 30);
    Point   c(20, 0);
    Point   p(30, 15);

    if (a.bsp(a, b, c, p) == true)
        std::cout << "true" << std::endl;
    else if (a.bsp(a, b, c, p) == false)
        std::cout << "false" << std::endl;
}
