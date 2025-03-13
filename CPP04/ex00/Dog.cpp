#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
	return ;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "\"Woof Woof : I'm a dog indeed\"" << std::endl;
}
