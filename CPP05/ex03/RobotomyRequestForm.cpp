/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:23:33 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/15 12:36:51 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
    _target = "default";
    return ;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    _target = other._target;
    return (*this);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm target constructor called" << std::endl;
    _target = target;
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkExecutor(executor);

    std::cout << "*drilling noise* (or whatever it is)" << std::endl;
    srand(time(0));
    if (rand() % 101 >= 50)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << _target << "'s robotomy failed" << std::endl;
}
