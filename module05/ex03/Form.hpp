#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	public:
		~Form();
		Form(const Form& form);
		Form(std::string name, int sign_grade, int exec_grade);
		Form &operator=(const Form& form);
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		Form();
		const std::string	name;
		bool			is_signed;
		const int		sign_grade;
		const int		exec_grade;
};

std::ostream &operator<<(std::ostream& os, const Form& form);

#endif
