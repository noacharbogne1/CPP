/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:02 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/15 12:52:25 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat	Y("Hector", 4);
	PresidentialPardonForm F("président");
	RobotomyRequestForm R("nono le petit robot");

	std::cout << std::endl;
	Y.signForm(F);
	Y.executeForm(F);
	Y.signForm(R);
	Y.signForm(R);
	Y.executeForm(R);
	std::cout << std::endl;
}
