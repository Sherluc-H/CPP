#include <iostream>
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor" << std::endl;
	this->type = "ice";
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

Ice::Ice(const Ice& ice)
{
	(void)ice;
	std::cout << "Ice copy constructor" << std::endl;
	this->type = "ice";
}

Ice &Ice::operator=(const Ice& ice)
{
	(void)ice;
	std::cout << "Ice op=" << std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
