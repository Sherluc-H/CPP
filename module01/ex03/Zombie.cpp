/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:06:15 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/12 13:53:23 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << this->name << " zombie of type " << this->type << " has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name  << " says: bye" << std::endl;
}

void Zombie::advert(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss ..." << std::endl;
}
void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>" << " I " << this->name << " waake uup" << std::endl;
}

void Zombie::setZombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	announce();
}
