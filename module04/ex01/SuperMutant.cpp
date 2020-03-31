#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& spm) : Enemy(spm.hp, spm.type)
{
	std::cout << "SuperMutant Copy Constructor" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant& spm)
{
	this->hp = spm.hp;
	this->type = spm.type;
	return (*this);
}

void SuperMutant::takeDamage(int i)
{
	i = i - 3;
	Enemy::takeDamage(i);
}
