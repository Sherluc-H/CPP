#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1;
		//b1.incGrade();
		//std::cout << b1;
		b1.decGrade();
		std::cout << b1;
	}
	catch (std::exception & e1)
	{
		std::cout << "1 not ok" << e1.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("b2", 150);
		std::cout << b2;
		//b2.decGrade();
		//std::cout << b2;
		b2.incGrade();
		std::cout << b2;
	}
	catch (std::exception & e2)
	{
		std::cout << "2 not ok" << e2.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("b3", 0);
		std::cout << b3;
	}
	catch (std::exception & e3)
	{
		std::cout << "3 not ok" << e3.what() << std::endl;
	}

	return (0);
}
