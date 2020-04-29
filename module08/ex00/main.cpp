/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 22:55:06 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/28 23:21:43 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <array>
#include "easyfind.hpp"

int	main(void)
{
	std::array<int, 2> arr = {1, 2};
	std::array<int, 2>::iterator i = easyfind(arr, 2);
	if (i != arr.end())
		std::cout << *i << " found" << std::endl;
	else
		std::cout << "not found " << *i << "|" << *(arr.end())<< std::endl;
	std::array<int, 2>::iterator i2 = std::find(arr.begin(), arr.end(), 2);
	if (i2 != arr.end())
		std::cout << *i2 << " found" << std::endl;
	else
		std::cout << "not found " << *i2 << "|" << *(arr.end()) << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(0);
	vec.push_back(3);
	std::vector<int>::iterator eitv = easyfind(vec, 0);
	std::vector<int>::iterator itv = std::find(vec.begin(), vec.end(), 0);
	if (eitv != vec.end())
		std::cout << *(eitv) << " found" << std::endl;
	else
		std::cout << "not found " << *eitv << "|" << *(arr.end()) << std::endl;
	if (itv != vec.end())
		std::cout << *(itv) << " found" << std::endl;
	else
		std::cout << "not found " << *itv << "|" << *(arr.end()) << std::endl;
	std::vector<int>::iterator eit2v = easyfind(vec, 2);
	std::vector<int>::iterator it2v = std::find(vec.begin(), vec.end(), 2);
	if (eit2v != vec.end())
		std::cout << *(eit2v) << " found" << std::endl;
	else
		std::cout << "not found " << *eit2v << "|" << *(arr.end()) << std::endl;
	if (it2v != vec.end())
		std::cout << *(it2v) << " found" << std::endl;
	else
		std::cout << "not found " << *it2v << "|" << *(arr.end()) << std::endl;

	return (0);
}
