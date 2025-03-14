#include "Brain.hpp"

// Default constructor
Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
    std::ostringstream output;
    for (int i = 0; i < 100; i++)
    {
        output << i;
        std::string convert = output.str();
        this->ideas[i] = convert;
    }
    return ;
}

// Copy constructor
Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
    return ;
}

// Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

// Destructor
Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}
