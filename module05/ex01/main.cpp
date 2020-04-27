/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 16:05:26 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/27 18:21:34 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Form f1("f1", 2, 3);
	std::cout << f1;
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1;
		//b1.incGrade();
		//std::cout << b1;
		b1.decGrade();
		std::cout << b1;
		b1.signForm(f1);
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
		b2.signForm(f1);
	}
	catch (std::exception & e2)
	{
		std::cout << "2 not ok: " << e2.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("b3", 0);
		std::cout << b3;
		b3.signForm(f1);
	}
	catch (std::exception & e3)
	{
		std::cout << "3 not ok: " << e3.what() << std::endl;
	}
	try
	{
		Form f2("f2", 151, 11);
		std::cout << f2;
	}
	catch (std::exception & e4)
	{
		std::cout << "4 not ok: " << e4.what() << std::endl;
	}
	std::cout << f1;

	return (0);
}
