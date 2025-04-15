/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:23:28 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/15 12:57:43 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = "default";
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
    return ;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm Assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    AForm::operator=(other);
    _target = other._target;
    return (*this);
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
    std::cout << "PresidentialPardonForm target constructor called" << std::endl;
    return ;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkExecutor(executor);

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
