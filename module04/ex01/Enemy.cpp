/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:52:12 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 16:07:27 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Enemy &Enemy::operator=(const Enemy& en)
{
	std::cout << "equal op Enemy" << std::endl;
	this->hp = en.hp;
	this->type = en.type;
	return (*this);
}

Enemy::Enemy(int hp, std::string const & type)
{
	std::cout << "Enemy Param Constructor" << std::endl;
	this->hp = hp;
	this->type = type;
}

std::string const & Enemy::getType() const
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
