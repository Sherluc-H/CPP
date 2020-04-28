/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 19:40:39 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/28 20:50:45 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <string>
#include "Array.hpp"

int	main(void)
{
	Array<int> a;
	Array<int> a1(2);
	a1[0] = 1;
	a1[1] = 2;
	std::cout << "a1 " << a1[0] << "|" << a1[1] << std::endl;
	Array<int> a2(a1);
	std::cout << "a2 " << a2[0] << "|" << a2[1] << std::endl;
	Array<int> a3;
	a3 = a1;
	std::cout << "a3 " << a3[0] << "|" << a3[1] << std::endl;
	a1[0] = 10;
	a2[1] = 20;
	std::cout << "a1 " << a1[0] << "|" << a1[1] << std::endl;
	std::cout << "a2 " << a2[0] << "|" << a2[1] << std::endl;
	std::cout << "a3 " << a3[0] << "|" << a3[1] << std::endl;
	std::cout << a1.size() << std::endl;
	std::cout << a2.size() << std::endl;
	std::cout << a3.size() << std::endl;
	try
	{
		//std::cout << a1[-1] << std::endl;
		std::cout << a1[0] << std::endl;
		std::cout << a1[1] << std::endl;
		std::cout << a1[2] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<std::string> s1(1);
	s1[0] = "string1";
	Array<std::string> s2(s1);
	Array<std::string> s3;
	s3 = s2;
	std::cout << s1[0] << std::endl;
	std::cout << s2[0] << std::endl;
	std::cout << s3[0] << std::endl;
	s2[0] = "string2";
	s3[0] = "string3";
	std::cout << s1[0] << std::endl;
	std::cout << s2[0] << std::endl;
	std::cout << s3[0] << std::endl;
	return (0);
}
