/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:29:37 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/14 13:36:40 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "ScalarConversion.hpp"

void	ft_check_special_value(std::string &nb_str, size_t &str_length)
{
	size_t pos_end_other;
	float nb_float;
	double nb_double;

	try
	{
		nb_double = std::stod(nb_str, &pos_end_other);
		try
		{
			nb_float = std::stof(nb_str, &pos_end_other);
			if (nb_float != nb_float)//nan || nanf
			{
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;		
				if (pos_end_other < str_length && nb_str[pos_end_other] == 'f')
				{
					std::cout << "float: " << nb_float << "f" << std::endl;
					std::cout << "double: " << static_cast<double>(nb_float) << std::endl;
				}
				else
				{
					std::cout << "float: " << static_cast<float>(nb_double) << "f" << std::endl;
					std::cout << "double: " << nb_double << std::endl;
				}
			}
			else
			{
				if (pos_end_other < str_length && nb_str[pos_end_other] == 'f')
				{
					ScalarConversion scalar(nb_float);
					scalar.display();
				}
				else
				{
					ScalarConversion scalar(nb_double);
					scalar.display();
				}
			}
		}
		catch (std::out_of_range & e)//float inff
		{
			ScalarConversion scalar(nb_double);
			scalar.display();
		}
	}
	catch(std::out_of_range & e)//double inf
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;		
		std::cout << "float: " << "inff" << std::endl;
		std::cout << "double: " << "inf" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;		
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

int	ft_get_type(std::string nb_str)
{
	size_t str_length;
	size_t pos_end_int;
	size_t pos_end_other;
	int nb_int;
	float nb_float;
	double nb_double;

	str_length = nb_str.length();
	try
	{
		nb_int = std::stoi(nb_str, &pos_end_int, 10);
		if (pos_end_int < str_length && nb_str[pos_end_int] == '.')
		{
			nb_double = std::stod(nb_str, &pos_end_other);
			if (pos_end_other < str_length && nb_str[pos_end_other] == 'f')
			{
				nb_float = std::stof(nb_str, &pos_end_other);
				ScalarConversion scalar(nb_float);
				scalar.display();
				return (0);
			}
			else
			{
				ScalarConversion scalar(nb_double);
				scalar.display();
				return (0);
			}
		}
		ScalarConversion scalar(nb_int);
		scalar.display();
		return (0);
	}
	catch (std::exception & e)//check if +inf -inf nan + f
	{
		ft_check_special_value(nb_str, str_length);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	std::string nb_str;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	ft_get_type(std::string(argv[1]));
	return (0);
}

