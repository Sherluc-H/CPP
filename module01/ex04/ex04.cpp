/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:16:34 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 00:00:10 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = std::string("HI THIS IS BRAIN");
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
