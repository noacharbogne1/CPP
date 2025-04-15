/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:23:21 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/15 12:40:17 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Default constructor
AForm::AForm(void) : _name("default"), _signGrade(40), _executeGrade(5)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
AForm::AForm(const AForm &other) : _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	const_cast<std::string&>(_name) = other._name;
	_signed = other._signed;
    return (*this);
}

// Destructor
AForm::~AForm(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

AForm::AForm(std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "AForm complete constructor called" << std::endl;
	return ;
}

std::string	AForm::getName(void) const
{
	return _name;
}

bool	AForm::getSigned(void) const
{
	return _signed;
}

int	AForm::getSignGrade(void) const
{
	return _signGrade;
}

int	AForm::getExecuteGrade(void) const
{
	return _executeGrade;
}

void	AForm::beSigned(Bureaucrat &a)
{

	if (a.getGrade() > _signGrade)
		throw GradeTooLowException(a.getGrade());
	else
		_signed = true;
}

void AForm::checkExecutor(Bureaucrat const &executor) const
{
	if (executor.getGrade() > _executeGrade)
		throw GradeTooLowException(executor.getGrade());
	if (_signed == false)
		throw NotSignedException();
}

std::ostream &operator<<(std::ostream &os, const AForm &a)
{
	os << a.getName() << ", form need grade "
		<< a.getSignGrade() << " to be signed and grade "
		<< a.getExecuteGrade() << " to be executed.";
	if (a.getSigned() == 1)
		os << "Form is signed" << std::endl;
	else
		os << "Form is not signed" << std::endl;
	return os;
}
