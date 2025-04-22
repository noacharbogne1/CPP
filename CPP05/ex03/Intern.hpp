/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:41:30 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 16:07:56 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"

class Intern
{
    public:
        Intern(void);
        Intern(const Intern& other);
        Intern &operator=(const Intern &other);
        ~Intern();

        AForm *makeForm(const std::string &name, const std::string &target);
        class InexistantFormException;
};

class Intern::InexistantFormException : public std::exception
{
    public :
		InexistantFormException() {}
		const char* what() const throw() {
			return "Form does not exist";
		}
		~InexistantFormException() throw() {}
};

#endif
