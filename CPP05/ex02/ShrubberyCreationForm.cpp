/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:23:38 by ncharbog          #+#    #+#             */
/*   Updated: 2025/04/22 14:31:53 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
    _target = "default";
    return ;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    _target = other._target;
    return (*this);
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm target constructor called" << std::endl;
    _target = target;
    return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    checkExecutor(executor);

    std::string fileName = _target + "_shrubbery";
    std::ofstream File(fileName.c_str());

    File << "     v .   ._, |_  .,\n";
    File << "      `-._\\/  .  \\ /    |/_\n";
    File << "          \\\\  _\\, y | \\\\//\n";
    File << "    _\\_.___\\\\, \\\\/ -.\\||\n";
    File << "      `7-,--.`._||  / / ,\n";
    File << "      /'     `-. `./ / |/_.\'\n";
    File << "              |    |//\n";
    File << "              |_    /\n";
    File << "              |-   |\n";
    File << "              |   =|\n";
    File << "              |    |\n";
    File << "-------------/ ,  . \\--------._\n";
    File << "        _-_\n";
    File << "     /~~   ~~\\\n";
    File << "  /~~        ~~\\\n";
    File << " {             }\n";
    File << "  \\  _-     -_  /\n";
    File << "    ~  \\\\ //  ~\n";
    File << "    _- -  | | _- _\n";
    File << "    _ -   | |   -_\n";
    File << "         // \\\\\n";

    File.close();
}
