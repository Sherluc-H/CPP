/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:06:15 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/22 23:47:08 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
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
	std::cout << this->name  << " says: \"bye\"" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::setZombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}
