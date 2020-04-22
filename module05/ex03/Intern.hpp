#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& i);
		Intern &operator=(const Intern& i);
		Form* makeForm(std::string name, std::string target);
};

#endif
