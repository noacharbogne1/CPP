/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:06 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 13:59:14 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default")
{
	std::cout << _name << ": Bureaucrat default constructor called" << std::endl;
	_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(int grade) : _name("default")
{
	std::cout << _name << ": Bureaucrat grade constructor called" << std::endl;
	try
	{
		if (grade > 150)
			throw GradeTooLowException(grade);
		if (grade < 1)
			throw GradeTooHighException(grade);
		_grade = grade;
	}
	catch (const std::exception &e)
	{
		_grade = 150;
		std::cerr << "Error: construction of " << _name << " failed. "
			<< e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	std::cout << _name << ": Bureaucrat name constructor called" << std::endl;
	_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << _name << ": Bureaucrat name + grade constructor called" << std::endl;
	_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = other;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	const_cast<std::string&>(_name) = other._name;
	_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << _name << ": Bureaucrat destructor called" << std::endl;
	return ;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

std::string	Bureaucrat::getName(void) const
{
	return _name;
}

void	Bureaucrat::increaseGrade(void)
{
	try
	{
		if (_grade == 1)
			throw GradeTooHighException(_grade);
		_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: increasing of bureaucrat " << _name
		<< " failed. " << e.what() << std::endl;
	}
}

void	Bureaucrat::decreaseGrade(void)
{
	try
	{
		if (_grade == 150)
			throw GradeTooLowException(_grade);
		_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: decreasing of bureaucrat" << _name << " failed. "
		<< e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " couldn't sign "
			<< form.getName() << " because " << e.what() << '\n';
		return ;
	}
	std::cout << _name << " signed " << form.getName() << std::endl;

}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &a)
{
	os << a.getName() << ", bureaucrat grade "
		<< a.getGrade() << "." << std::endl;
	return os;
}
