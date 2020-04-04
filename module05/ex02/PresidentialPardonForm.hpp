#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
	public:
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& ppf);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& ppf);
		void execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm();
		std::string target;
};

#endif
