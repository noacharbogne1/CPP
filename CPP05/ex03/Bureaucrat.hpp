/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:09 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/15 15:24:04 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <sstream>

# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat(void);

		Bureaucrat(int grade);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);

		std::string getName(void) const;
		int getGrade(void) const;

		void increaseGrade(void);
		void decreaseGrade(void);

		void signForm(AForm &form);
		void executeForm(AForm const &form) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &a);

class GradeTooHighException : public std::exception
{
	private:
		std::string _msg;
	public:
		GradeTooHighException(int grade) {
			std::stringstream ss;
			ss << grade << ": Grade too high";
			_msg = ss.str();
		}
		const char* what() const throw() {
			return _msg.c_str();
		}
		~GradeTooHighException() throw() {}
};

class GradeTooLowException : public std::exception
{
	private:
		std::string	_msg;
	public:
		GradeTooLowException(int grade) {
			std::stringstream ss;
			ss << grade << ": Grade too low";
			_msg = ss.str();
		}
		const char* what() const throw() {
			return _msg.c_str();
		}
		~GradeTooLowException() throw() {}
};

class NotSignedException : public std::exception
{
	public:
		NotSignedException() {}
		const char* what() const throw() {
			return "Form is not signed";
		}
		~NotSignedException() throw() {}
};

class AlreadySignedException : public std::exception
{
	public :
		AlreadySignedException() {}
		const char* what() const throw() {
			return "Form is already signed";
		}
		~AlreadySignedException() throw() {}
};

#endif
