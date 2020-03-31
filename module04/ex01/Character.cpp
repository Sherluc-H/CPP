#include <iostream>
#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default constructor" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor" << std::endl;
}

Character::Character(std::string const & name)
{
	std::cout << "Character Param constructor" << std::endl;
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
}

Character::Character(const Character& c)
{
	std::cout << "Character Copy constructor" << std::endl;
	*this = c;
}

Character &Character::operator=(const Character& c)
{
	this->name = c.name;
	this->ap = c.ap;
	this->weapon = c.weapon;
	return (*this);
}

void Character::recoverAP()
{
	int add_ap = 10;
	int max_ap = 40;
	if (this->ap == max_ap)
		return ;
	if (this->ap + add_ap > max_ap)
		add_ap = max_ap - this->ap;
	this->ap = this->ap + add_ap;
	std::cout << this->name << " got " << add_ap << " ap, has " << this->ap << "ap" << std::endl;
		
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->weapon == NULL)
		return;
	int ap_cost = this->weapon->getAPCost();
	int damage = this->weapon->getDamage();
	if (this->ap < ap_cost)
		return;
	this->ap = this->ap - ap_cost;
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(damage);
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string Character::getName() const
{
	return (this->name);
}

int Character::getAP() const
{
	return (this->ap);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &os, Character &c)
{
	if (c.getWeapon())
		os << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		os << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}
