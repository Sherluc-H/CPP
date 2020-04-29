/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 23:39:28 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/29 02:26:57 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <time.h>
#include "span.hpp"

int	main(void)
{
	try
	{
		Span s(5);

		s.addNumber(5);
		s.addNumber(3);
		s.addNumber(17);
		s.addNumber(9);
		s.addNumber(11);

		//s.addNumber(3);

		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "1 Exception: " << e.what() << std::endl;
	}
	try
	{
		Span s(3);

		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "2 Exception: " << e.what() << std::endl;
	}
	try
	{
		int size = 10001;
		Span s(size);
		int i;

		srand(time(NULL));
		i = 0;
		while (i < size)
		{
			s.addNumber(rand() % size);
			i++;
		}
		//s.addNumber(rand() % size);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "3 Exception: " << e.what() << std::endl;
	}
	return (0);
}
