#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class Bureaucrat: public std::exception
{
	public:
		~Bureaucrat() _NOEXCEPT;
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat& bureaucrat);
		std::string getName() const;
		int getGrade() const;
		void incGrade();//grade 1 == highest
		void decGrade();//grade 150 == lowest
		Bureaucrat &GradeTooHighException() throw();
		Bureaucrat &GradeTooLowException() throw();
		const char* what() const throw();
		void signForm(Form& form);
		void executeForm(Form const & form);

	private:
		Bureaucrat();
		const std::string name;
		int grade;
		std::string error_msg;
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
