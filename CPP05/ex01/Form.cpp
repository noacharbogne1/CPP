#include "Form.hpp"

Form::Form(void) : _name("default"), _signGrade(40), _executeGrade(5)
{
	std::cout << "Form default constructor called" << std::endl;
	_signed = false;
	return ;
}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "Form complete constructor called" << std::endl;
	_signed = false;
	return ;
}

Form::Form(const Form &other) : _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = other;
	return ;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	const_cast<std::string&>(_name) = other._name;
	_signed = other._signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

std::string	Form::getName(void) const
{
	return _name;
}

bool	Form::getSigned(void) const
{
	return _signed;
}

int	Form::getSignGrade(void) const
{
	return _signGrade;
}

int	Form::getExecuteGrade(void) const
{
	return _executeGrade;
}

void	Form::beSigned(Bureaucrat &a)
{

	if (a.getGrade() > _signGrade)
		throw GradeTooLowException(a.getGrade());
	else
		_signed = true;
}

std::ostream &operator<<(std::ostream &os, const Form &a)
{
	os << a.getName() << ", form need grade "
		<< a.getSignGrade() << " to be signed and grade "
		<< a.getExecuteGrade() << " to be executed.";
	if (a.getSigned() == 1)
		os << "Form is signed" << std::endl;
	else
		os << "Form is not signed" << std::endl;
	return os;
}
