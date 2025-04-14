#include "AForm.hpp"

// Default constructor
AForm::AForm(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
AForm::AForm(const AForm &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
AForm::~AForm(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

