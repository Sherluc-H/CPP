#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& rds) : Enemy(rds.hp, rds.type)
{
	std::cout << "RadScorpion copy constructor" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion& rds)
{
	this->hp = rds.hp;
	this->type = rds.type;
	return (*this);
}
