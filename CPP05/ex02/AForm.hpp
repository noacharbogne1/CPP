/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:34:15 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/14 16:54:11 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _executeGrade;
    public:
        AForm(void);
        AForm(const AForm& other);
        AForm &operator=(const AForm &other);
        ~AForm();

        std::string getName(void) const;
		bool getSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;

		void beSigned(Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &os, const Form &a);

#endif
