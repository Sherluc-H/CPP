/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:41:30 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/30 14:13:55 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "no type";
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

void ZombieEvent::announce(std::string name)
{
	std::cout << "I " << name << " wooke up.. " << name << " wants braain" << std::endl;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *z;

	z = new Zombie(name, this->type);
	return (z);
}

Zombie* ZombieEvent::randomChump()
{
	std::string r_name[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
	int r_number;
	Zombie *z;

	srand(time(NULL));
	r_number = rand() % 10;
	z = new Zombie(r_name[r_number], this->type);
	announce(r_name[r_number]);
	return (z);
}
