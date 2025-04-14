#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

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

		Form(std::string name, int signGrade, int executeGrade);

		std::string getName(void) const;
		bool getSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;

		void beSigned(Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &os, const Form &a);

#endif
