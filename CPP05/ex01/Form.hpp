#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _executeGrade;
	public:
		Form(void);
		Form(const Form& other);
		Form &operator=(const Form &other);
		~Form();

		std::string getName(void) const;
		bool getSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;

		void beSigned(Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &os, const Form &a);

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

#endif
