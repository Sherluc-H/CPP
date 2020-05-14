/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:30:17 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/14 13:32:32 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{
	std::cout << "Scalar default constructor" << std::endl;
}

ScalarConversion::~ScalarConversion()
{
	std::cout << "Scalar destructor" << std::endl;
}

ScalarConversion::ScalarConversion(const ScalarConversion& sc)
{
	std::cout << "Scalar copy constructor" << std::endl;
	*this = sc;
}

ScalarConversion::ScalarConversion(int nb_int)
{
	std::cout << "Scalar int constructor" << std::endl;
	this->nb_char = static_cast<char>(nb_int);
	this->nb_int = nb_int;
	this->nb_float = static_cast<float>(nb_int);
	this->nb_double = static_cast<double>(nb_int);
}

ScalarConversion::ScalarConversion(float nb_float)
{
	std::cout << "Scalar float constructor" << std::endl;
	this->nb_char = static_cast<char>(nb_float);
	this->nb_int = static_cast<int>(nb_float);
	this->nb_float = nb_float;
	this->nb_double = static_cast<double>(nb_float);
}

ScalarConversion::ScalarConversion(double nb_double)
{
	std::cout << "Scalar double constructor" << std::endl;
	this->nb_char = static_cast<char>(nb_double);
	this->nb_int = static_cast<int>(nb_double);
	this->nb_float = static_cast<float>(nb_double);
	this->nb_double = nb_double;
}

ScalarConversion &ScalarConversion::operator=(const ScalarConversion& sc)
{
	std::cout << "Scalar op=" << std::endl;
	this->nb_char = sc.nb_char;
	this->nb_int = sc.nb_int;
	this->nb_float = sc.nb_float;
	this->nb_double = sc.nb_double;
	return (*this);
}

void ScalarConversion::display()
{
	if (this->nb_char >= 32 && this->nb_char <= 127)
	{
		std::cout << "char: \'" << this->nb_char << "\'" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << this->nb_int << std::endl;
	if (this->nb_int == this->nb_float && this->nb_int < 100000 && this->nb_int > -100000)
	{
		std::cout << "float: " << this->nb_float << ".0" << "f" << std::endl;
		std::cout << "double: " << this->nb_double << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << this->nb_float << "f" << std::endl;
		std::cout << "double: " << this->nb_double << std::endl;
	}
}
