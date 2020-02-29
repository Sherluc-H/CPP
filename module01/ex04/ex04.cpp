/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:16:34 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/12 15:31:31 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = std::string("HI THIS IS BRAIN");
	std::string *ptr = &str;
	//std::cout << str << " : " << &str << std::endl;
	//std::cout << *ptr << " : " << ptr << std::endl;
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	return (0);
}
