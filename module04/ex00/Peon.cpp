#include <iostream>
#include <string>
#include "Peon.hpp"

Peon::Peon()
{
	std::cout << "Peon Default constructor" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& p)
{
	std::cout << "Peon Copy constructor" << std::endl;
	*this = p;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon Peon::operator=(const Peon& p)
{
	this->name = p.name;
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}
