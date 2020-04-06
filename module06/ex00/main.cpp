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
		if (pos_end_other < str_length && nb_str[pos_end_other] == 'f')
		{
			try
			{
				nb_float = std::stof(nb_str, &pos_end_other);
				std::cout << "float: " << nb_float << "f" << std::endl;
				std::cout << "double: " << (double)nb_float << std::endl;
			}
			catch (std::out_of_range & e)
			{
				std::cout << "float: " << (nb_str[0] == '-' ? "" : "+") << (float)nb_double << "f" << std::endl;
				std::cout << "double: " << nb_double << std::endl;
			}
		}
		else
		{
			try
			{
				nb_float = std::stof(nb_str, &pos_end_other);
				std::cout << "float: " << (float)nb_double << "f" << std::endl;
				std::cout << "double: " << nb_double << std::endl;
			}
			catch (std::out_of_range & e)// -inff || +inff
			{
				std::cout << "float: " << (nb_str[0] == '-' ? "" : "+") << (float)nb_double << "f" << std::endl;
				std::cout << "double: " << nb_double << std::endl;
			}
		}
	}
	catch(std::invalid_argument & e)
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	catch(std::out_of_range & e)
	{
		std::cout << "float: " << (nb_str[0] == '-' ? "-" : "+") << "inff" << std::endl;
		std::cout << "double: " << (nb_str[0] == '-' ? "-" : "+") << "inf" << std::endl;
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
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
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

