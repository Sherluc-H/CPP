/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 22:55:06 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/23 14:50:23 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);

	std::list<int>::iterator ei1 = easyfind(l, 2);
	if (ei1 != l.end())
		std::cout << *ei1 << " found" << std::endl;
	else
		std::cout << "not found " << *ei1 << "|" << *(l.end())<< std::endl;
	std::list<int>::iterator i1 = std::find(l.begin(), l.end(), 2);
	if (i1 != l.end())
		std::cout << *i1 << " found" << std::endl;
	else
		std::cout << "not found " << *i1 << "|" << *(l.end()) << std::endl;

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(0);
	vec.push_back(3);

	std::vector<int>::iterator ei2 = easyfind(vec, 0);
	if (ei2 != vec.end())
		std::cout << *(ei2) << " found" << std::endl;
	else
		std::cout << "not found " << *ei2 << "|" << *(vec.end()) << std::endl;
	std::vector<int>::iterator i2 = std::find(vec.begin(), vec.end(), 0);
	if (i2 != vec.end())
		std::cout << *(i2) << " found" << std::endl;
	else
		std::cout << "not found " << *i2 << "|" << *(vec.end()) << std::endl;

	std::vector<int>::iterator ei3 = easyfind(vec, 5);
	if (ei3 != vec.end())
		std::cout << *(ei3) << " found" << std::endl;
	else
		std::cout << "not found " << *ei3 << "|" << *(vec.end()) << std::endl;
	std::vector<int>::iterator i3 = std::find(vec.begin(), vec.end(), 5);
	if (i3 != vec.end())
		std::cout << *(i3) << " found" << std::endl;
	else
		std::cout << "not found " << *i3 << "|" << *(vec.end()) << std::endl;
	return (0);
}
