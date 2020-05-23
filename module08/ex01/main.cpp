/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 23:39:28 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/23 15:07:10 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <vector>
#include <list>
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

		s.addNumber(11);
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

		s.addNRandNumber(10001, 0, 20000);

		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "3 Exception: " << e.what() << std::endl;
	}
	try
	{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(3);
		v.push_back(6);
		v.push_back(10);
		Span s(4);

		s.addNumber(3);
		s.addFromIterator(v.begin(), v.end());
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "4 Exception: " << e.what() << std::endl;
	}
	try
	{
		std::list<int> l;
		l.push_back(1);
		l.push_back(3);
		l.push_back(6);
		l.push_back(10);
		Span s(4);

		s.addFromIterator(l.begin(), l.end());
		//s.addNumber(11);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "5 Exception: " << e.what() << std::endl;
	}
	return (0);
}
