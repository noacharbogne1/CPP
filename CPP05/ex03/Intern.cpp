/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:41:28 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/15 16:23:34 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Default constructor
Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
    return ;
}

// Copy constructor
Intern::Intern(const Intern &other)
{
    std::cout << "Intern copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
Intern::~Intern(void)
{
    std::cout << "Intern destructor called" << std::endl;
    return ;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
    int n = 0;
    std::string choice[3] = {"PresidentialPardonForm",
            "RobotomyRequestForm", "ShrubberyCreationForm"};

    for(; n < 3 && choice[n] != name ;n++);
    switch(n)
    {
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
            std::cout << name << ": this form doesn't exist" << std::endl;
    }
    return NULL;
}
