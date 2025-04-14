#include "PresidentielPardonForm.hpp"

// Default constructor
PresidentielPardonForm::PresidentielPardonForm(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// Copy constructor
PresidentielPardonForm::PresidentielPardonForm(const PresidentielPardonForm &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
    return ;
}

// Assignment operator overload
PresidentielPardonForm &PresidentielPardonForm::operator=(const PresidentielPardonForm &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Destructor
PresidentielPardonForm::~PresidentielPardonForm(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

