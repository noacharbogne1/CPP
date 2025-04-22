/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:02 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 14:33:38 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	Y("Hector", 4);
	Bureaucrat	P("Youpi", 89);
	PresidentialPardonForm F("président");
	RobotomyRequestForm R("nono le petit robot");
	ShrubberyCreationForm S("ok ok");

	std::cout << std::endl;
	std::cout << R << std::endl;
	P.signForm(S);
	Y.executeForm(S);
	P.signForm(F);
	Y.signForm(F);
	Y.executeForm(F);
	Y.signForm(R);
	Y.signForm(R);
	Y.executeForm(R);
	std::cout << std::endl;
}
