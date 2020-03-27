#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor: A FR4G-TP has been created" << std::endl;
	this->hit_pts = 100;
	this->max_hit_pts = 100;
	this->nrg_pts = 100;
	this->max_nrg_pts = 100;
	this->level = 1;
	this->name = "no name";
	this->melee_att_dam = 30;
	this->ranged_att_dam = 20;
	this->armor_dam_reduc = 5;
	srand(time(NULL));
}

FragTrap::~FragTrap()
{
	std::cout << "[" << this->name << "] FR4G-TP has been destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft)
{
	std::cout << "Copy Constructor: A copy of FR4G-TP [" << ft.name << "] has been created"<< std::endl;
	*this = ft;
	srand(time(NULL));
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Param Constructor: [" << name << "] FR4G-TP has been created" << std::endl;
	this->hit_pts = 100;
	this->max_hit_pts = 100;
	this->nrg_pts = 100;
	this->max_nrg_pts = 100;
	this->level = 1;
	this->name = name;
	this->melee_att_dam = 30;
	this->ranged_att_dam = 20;
	this->armor_dam_reduc = 5;
	srand(time(NULL));
}

FragTrap &FragTrap::operator=(const FragTrap& ft)
{
	this->hit_pts = ft.hit_pts;
	this->max_hit_pts = ft.max_hit_pts;
	this->nrg_pts = ft.nrg_pts;
	this->max_nrg_pts = ft.max_nrg_pts;
	this->level = ft.level;
	this->name = ft.name;
	this->melee_att_dam = ft.melee_att_dam;
	this->ranged_att_dam = ft.ranged_att_dam;
	this->armor_dam_reduc = ft.armor_dam_reduc;
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " <<  this->ranged_att_dam << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " melee, causing " << this->melee_att_dam<< " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->armor_dam_reduc;
	std::cout << "(" << "FR4G-TP " << this->name << "\'s armor reduced damages by "<< this->armor_dam_reduc << ")" << std::endl;
	if (amount < 0)
		amount = 0;
	if (this->hit_pts < amount)
		amount = this->hit_pts;
	this->hit_pts = this->hit_pts - amount;
	std::cout << "FR4G-TP " << this->name << " got hit and lost " << amount << " hp" << " (current: " << this->hit_pts << "/" << this->max_hit_pts << "hp)" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->hit_pts + amount > this->max_hit_pts)
		amount = this->max_hit_pts - this->hit_pts;
	this->hit_pts = this->hit_pts + amount;
	std::cout << "FR4G-TP " << this->name << " got " << amount << " hp from repair" << " (current: " << this->hit_pts << "/" << this->max_hit_pts << "hp)"<< std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rand_num;
	std::string attacks[5] = {"no1", "no2", "no3", "no4", "no5"};

	if (this->nrg_pts < 25)
	{
		std::cout << "FR4G-TP attack failed " << this->name << " doesn't have enough energy points (current: " << this->nrg_pts << "/" << this->max_nrg_pts << "ep)"<< std::endl;
		return ;
	}
	rand_num = rand() % 5;
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " with special attack " << attacks[rand_num] << std::endl;
	this->nrg_pts = this->nrg_pts - 25;
	std::cout << "FR4G-TP " << this->name << " consumed 25 energy points (current: " << this->nrg_pts << "/" << this->max_nrg_pts << "ep)"<< std::endl;
}

std::string FragTrap::getName(void) const
{
	return (this->name);
}

unsigned int FragTrap::getMeleeAttDam(void) const
{
	return (this->melee_att_dam);
}

unsigned int FragTrap::getRangedAttDam(void) const
{
	return (this->ranged_att_dam);
}
