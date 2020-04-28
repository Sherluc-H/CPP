/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:22:54 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/28 17:37:14 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int num;

	num = rand() % 3;
	std::cout << num << std::endl;
	if (num == 0)
		return (new A());
	else if (num == 1)
		return (new B());
	else
		return (new C());
}

void identify_from_pointer(Base * p)
{
	Base *base;

	base = NULL;
	base = dynamic_cast<A*>(p);
	if (base)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	base = dynamic_cast<B*>(p);
	if (base)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	base = dynamic_cast<C*>(p);
	if (base)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void identify_from_reference( Base & p)
{
	Base base;

	try
	{
		base = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	try
	{
		base = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
	try
	{
		base = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception & e)
	{}
}

int	main(void)
{
	Base *base;
	srand(time(NULL));
	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);

	delete base;

	return (0);
}
