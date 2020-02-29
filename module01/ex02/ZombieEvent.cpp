/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:41:30 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/11 17:51:21 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent:: r_name[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "H"};

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *z;

	z = new Zombie(name, this->type);
	return (z);
}

void ZombieEvent::announce(std::string name)
{
	std::cout << "I " << name << " wooke up.. " << name << " wants braain" << std::endl;
}

Zombie* ZombieEvent::randomChump()
{
	int r_number;
	Zombie *z;

	srand(time(NULL));
	r_number = rand() % 10;
	z = new Zombie(r_name[r_number], this->type);
	announce(r_name[r_number]);
	return (z);
}
