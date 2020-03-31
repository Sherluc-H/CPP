#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer()
{
	std::cout << "Sorcerer Default constructor" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& s)
{
	*this = s;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	this->name = name;
	this->title = title;
}

Sorcerer &Sorcerer::operator=(const Sorcerer& s)
{
	this->name = s.name;
	this->title = s.title;
	return (*this);
}

std::string Sorcerer::getName() const
{
	return (this->name);
}

std::string Sorcerer::getTitle() const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const & v) const
{
	v.getPolymorphed();
}

std::ostream &operator<<(std::ostream &os, const Sorcerer& s)
{
	(void)s;
	os << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
