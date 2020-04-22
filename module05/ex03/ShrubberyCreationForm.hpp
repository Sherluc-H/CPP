#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& scf);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& scf);
		void execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm();
		std::string target;
};

#endif
