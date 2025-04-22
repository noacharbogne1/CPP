/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:41:28 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 16:07:47 by ncharbog         ###   ########.fr       */
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

    for(; n < 3 && choice[n] != name; n++);
    switch(n)
    {
        case 0:
            std::cout << "Intern creates " << choice[n] << std::endl;
            return new PresidentialPardonForm(target);
        case 1:
            std::cout << "Intern creates " << choice[n] << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << choice[n] << std::endl;
            return new ShrubberyCreationForm(target);
        default:
            throw InexistantFormException();
    }
    return NULL;
}
