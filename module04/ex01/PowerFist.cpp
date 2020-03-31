#include <iostream>
#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	std::cout << "PowerFist Default constructor" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist Destructor" << std::endl;
}

PowerFist::PowerFist(const PowerFist& pf) : AWeapon(pf.name, pf.apcost, pf.damage)
{
	std::cout << "PowerFist Copy constructor" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist& pf)
{
	this->name = pf.name;
	this->apcost = pf.apcost;
	this->damage = pf.damage;
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM!*" << std::endl;
}
