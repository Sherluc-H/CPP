#include <iostream>
#include <fstream>
#include <sstream>

std::string	ft_replace(std::string str, std::string s1, std::string s2)
{
	std::size_t pos;
	std::size_t new_pos;

	pos = 0;
	new_pos = 0;
	while (pos != std::string::npos)
	{
		pos = str.find(s1, new_pos);
		if (pos != std::string::npos)
		{
			str.replace(str.find(s1, new_pos), s1.length(), s2);
			new_pos = pos + s2.length();
		}
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	std::stringstream	sstr;
	std::ifstream		ifs;
	std::ofstream		ofs;

	if (argc != 4)
	{
		std::cout << "Error arguments" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (ifs.is_open())
	{
		sstr << ifs.rdbuf();
	}
	else
	{
		std::cout << "Error couldn't open file" << std::endl;
		return (1);
	}
	ofs.open(std::string(argv[1]).append(".replace"));
	if (ofs.is_open())
		ofs << ft_replace(sstr.str(), std::string(argv[2]), std::string(argv[3]));
	else
	{
		std::cout << "Error couldn't open file" << std::endl;
		return (1);
	}
	return (0);
}
