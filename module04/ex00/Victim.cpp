#include <iostream>
#include <string>
#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "Victim Default constructor" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim& v)
{
	std::cout << "Victim Copy constructor" << std::endl;
	*this = v;
}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called "<< name << " just appeared!" << std::endl;
	this->name = name;
}

Victim &Victim::operator=(const Victim& v)
{
	this->name = v.name;
	return (*this);
}

std::string Victim::getName()
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream& os, Victim& v)
{
	os << "I\'m " << v.getName() << " and I like otters!" << std::endl;
	return (os);
}
