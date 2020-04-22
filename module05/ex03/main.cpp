#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	//Form f1("f1", 2, 3);
	//std::cout << f1;
	ShrubberyCreationForm s("abc");
	RobotomyRequestForm r("bender");
	PresidentialPardonForm p("somebody");
	Intern i;
	Form* f;
	f = i.makeForm("aform", "atarget");
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1;
		//b1.signForm(f1);
		//s.beSigned(b1);
		b1.signForm(s);
		//s.execute(b1);
		b1.executeForm(s);
		b1.signForm(r);
		b1.executeForm(r);
		b1.executeForm(r);
		b1.executeForm(r);
		b1.signForm(p);
		b1.executeForm(p);
	}
	catch (std::exception & e1)
	{
		std::cout << "1 not ok " << e1.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("b2", 150);
		std::cout << b2;
		//b2.signForm(f1);
		//b2.signForm(s);
		//s.execute(b2);
		//b2.signForm(r);
		//b2.executeForm(r);
		b2.executeForm(p);
	}
	catch (std::exception & e2)
	{
		std::cout << "2 not ok " << e2.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("b3", 0);
		std::cout << b3;
		//b3.signForm(f1);
	}
	catch (std::exception & e3)
	{
		std::cout << "3 not ok " << e3.what() << std::endl;
	}
	//std::cout << f1;

	return (0);
}
