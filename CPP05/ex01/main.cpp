/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:02 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/14 16:24:08 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Y("Hector", 1);
	Bureaucrat	P("Hermione", 50);
	Form	A;
	Form	B("Démission", 3, 1);

	std::cout << std::endl;
	Y.signForm(A);
	P.signForm(A);
	Y.signForm(B);
	P.signForm(B);
	Y.increaseGrade();
	std::cout << Y;
	Y.decreaseGrade();
	std::cout << Y << std::endl;

	P.decreaseGrade();
	std::cout << P << std::endl;
}
