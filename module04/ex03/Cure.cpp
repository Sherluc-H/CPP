#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor" << std::endl;
	this->type = "cure";
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

Cure::Cure(const Cure& cure)
{
	(void)cure;
	std::cout << "Cure copy constructor" << std::endl;
	this->type = "cure";
}

Cure &Cure::operator=(const Cure& cure)
{
	(void)cure;
	std::cout << "Cure op=" << std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}
