#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "default SUPER-TP Created" << std::endl;
	//this->hit_pts = FragTrap::hit_pts;
	//this->max_hit_pts = FragTrap::max_hit_pts;
	//this->nrg_pts = NinjaTrap::nrg_pts;
	//this->max_nrg_pts = NinjaTrap::max_nrg_pts;
	this->level = 1;
	this->name = "no name";
	//this->melee_att_dam = NinjaTrap::melee_att_dam;
	//this->ranged_att_dam = FragTrap::ranged_att_dam;
	//this->armor_dam_reduc = FragTrap::armor_dam_reduc;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << " SUPER-TP destoyed" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& spt)
{
	std::cout << this->name << " SUPER-TP Created with copy constructor" << std::endl;
	*this = spt;
}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << name << " SUPER-TP Created with param" << std::endl;
	//this->hit_pts = FragTrap::hit_pts;
	//this->max_hit_pts = FragTrap::max_hit_pts;
	//this->nrg_pts = NinjaTrap::nrg_pts;
	//this->max_nrg_pts = NinjaTrap::max_nrg_pts;
	this->level = 1;
	this->name = name;
	//this->melee_att_dam = NinjaTrap::melee_att_dam;
	//this->ranged_att_dam = FragTrap::ranged_att_dam;
	//this->armor_dam_reduc = FragTrap::armor_dam_reduc;
}

SuperTrap &SuperTrap::operator=(const SuperTrap& spt)
{
	this->hit_pts = spt.hit_pts;
	this->max_hit_pts = spt.max_hit_pts;
	this->nrg_pts = spt.nrg_pts;
	this->max_nrg_pts = spt.max_nrg_pts;
	this->level = spt.level;
	this->name = spt.name;
	this->melee_att_dam = spt.melee_att_dam;
	this->ranged_att_dam = spt.ranged_att_dam;
	this->armor_dam_reduc = spt.armor_dam_reduc;
	return (*this);
}
