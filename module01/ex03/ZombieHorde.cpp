/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:03:04 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 01:20:20 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string ZombieHorde::r_name[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

ZombieHorde::ZombieHorde(int n)
{
	int i;
	int	r_number;

	std::cout << "create horde of " << n << " zombies" << std::endl;
	this->n = n;
	i = 0;
	srand(time(NULL));
	this->n_zombie = new Zombie[n];
	while (i < n)
	{
		r_number = rand() % 10;
		this->n_zombie[i].setZombie(r_name[r_number], "unknown");
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "bye horde" << std::endl;
	delete[] this->n_zombie;
}

void ZombieHorde::announce()
{
	int i;

	i = 0;
	while (i < this->n)
	{
		this->n_zombie[i].announce();
		i++;
	}
}
