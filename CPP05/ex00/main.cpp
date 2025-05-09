/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:02 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 13:43:30 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Y("Hector", 1);
	Bureaucrat	P("Romy", 822);

	std::cout << std::endl;
	Y.increaseGrade();
	std::cout << Y;
	Y.decreaseGrade();
	std::cout << Y << std::endl;

	P.decreaseGrade();
	std::cout << P << std::endl;
}
