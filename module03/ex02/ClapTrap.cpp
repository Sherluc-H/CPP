#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default CL4P-TP Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "["<< this->name << "] CL4P-TP destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	std::cout << "CL4P-TP Created using copy constructor" << std::endl;
	*this = ct;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Param  CL4P-TP Created" << std::endl;
	this->name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& ct)
{
	this->hit_pts = ct.hit_pts;
	this->max_hit_pts = ct.max_hit_pts;
	this->nrg_pts = ct.nrg_pts;
	this->max_nrg_pts = ct.max_nrg_pts;
	this->level = ct.level;
	this->name = ct.name;
	this->melee_att_dam = ct.melee_att_dam;
	this->ranged_att_dam = ct.ranged_att_dam;
	this->armor_dam_reduc = ct.armor_dam_reduc;
	return (*this);
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target << " in range which causes " << this->ranged_att_dam << " points of damage" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target << " in melee which causes " << this->melee_att_dam << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->armor_dam_reduc;
	std::cout << this->name << "'s armor reduced damages by " << this->armor_dam_reduc << std::endl;
	if (amount < 0)
		amount = 0;
	if (this->hit_pts < amount)
		amount = this->hit_pts;
	this->hit_pts = this->hit_pts - amount;
	std::cout << this->name << " took damages and lost " << amount << " hp (current: " << this->hit_pts << "/" << this->max_hit_pts << "hp)"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_pts + amount > this->max_hit_pts)
		amount = this->max_hit_pts - this->hit_pts;
	this->hit_pts = this->hit_pts + amount;
	std::cout << this->name << " regained " << amount << " hp from repair(current: " << this->hit_pts << "/" << this->max_hit_pts << "hp)"<< std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int ClapTrap::getMeleeAttDam(void) const
{
	return (this->melee_att_dam);
}

unsigned int ClapTrap::getRangedAttDam(void) const
{
	return (this->ranged_att_dam);
}
