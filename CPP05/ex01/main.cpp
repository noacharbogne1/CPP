/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:02 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 14:08:56 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Y("Hector", 1);
	Bureaucrat	P("Hermione", 50);
	Form	A;
	Form	B("Démission", 3, 1);
	Form	C("ui", 0, 9);

	std::cout << std::endl;
	Y.signForm(A);
	Y.signForm(A);
	std::cout << A << std::endl;
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
