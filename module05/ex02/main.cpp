/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:08:35 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 19:11:37 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	//Form f1("f1", 2, 3);
	//std::cout << f1;
	ShrubberyCreationForm s("abc");
	RobotomyRequestForm r("bender");
	PresidentialPardonForm p("somebody");
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1;
		//b1.incGrade();
		//std::cout << b1;
		b1.decGrade();
		std::cout << b1;
		//b1.signForm(f1);
		b1.executeForm(s);
		b1.signForm(s);
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
		std::cout << "1 not ok: " << e1.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("b2", 150);
		std::cout << b2;
		//b2.decGrade();
		//std::cout << b2;
		b2.incGrade();
		std::cout << b2;
		//b2.signForm(f1);
		b2.signForm(s);
		b2.executeForm(s);
		b2.signForm(r);
		b2.executeForm(r);
		b2.signForm(p);
		b2.executeForm(p);
	}
	catch (std::exception & e2)
	{
		std::cout << "2 not ok: " << e2.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("b3", 0);
		std::cout << b3;
		//b3.signForm(f1);
	}
	catch (std::exception & e3)
	{
		std::cout << "3 not ok: " << e3.what() << std::endl;
	}
	/*try
	{
		Form f2("f2", 151, 11);
		std::cout << f2;
	}
	catch (std::exception & e4)
	{
		std::cout << "4 not ok: " << e4.what() << std::endl;
	}*/
	//std::cout << f1;

	return (0);
}
