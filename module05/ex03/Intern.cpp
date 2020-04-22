#include <iostream>
#include <string>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor" << std::endl;
}

Intern::Intern(const Intern& i)
{
	std::cout << "Intern copy constructor" << std::endl;
	*this = i;
}

Intern &Intern::operator=(const Intern& i)
{
	(void)i;
	std::cout << "Intern op=" << std::endl;
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::cout << "form name: " << name << ", target : " << target << std::endl;
	return (NULL);
}
