#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy()
{
	std::cout << "Enemy Default Constructor" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemy Destructor" << std::endl;
}

Enemy::Enemy(const Enemy& en)
{
	std::cout << "Enemy Copy Constructor" << std::endl;
	*this = en;
}

Enemy::Enemy(int hp, std::string const & type)
{
	std::cout << "Enemy Param Constructor" << std::endl;
	this->hp = hp;
	this->type = type;
}

std::string Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int i)
{
	if (i < 0)
		return ;
	std::cout << this->type << " took damage " << i;
	if (this->hp - i < 0)
		i = this->hp;
	this->hp = this->hp - i;
	std::cout << " have " << this->hp << " hp" << std::endl;
}
