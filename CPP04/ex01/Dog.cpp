#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->obj = new Brain();
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
	this->obj = new Brain();
	*obj = *(other.obj);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete obj;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "\"Woof Woof : I'm a dog indeed\"" << std::endl;
}

void	Dog::displayObjAddress(void) const
{
	std::cout << &obj << std::endl;
}
