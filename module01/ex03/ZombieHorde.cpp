/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:03:04 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/12 13:52:44 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string ZombieHorde::r_name[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

ZombieHorde::ZombieHorde(int n)
{
	int i;
	int	r_number;

	i = 0;
	srand(time(NULL));
	this->n_zombie = new Zombie[n];
	while (i < n)
	{
		r_number = rand() % 10;
		n_zombie[i].setZombie(r_name[r_number], "unknown");
		//n_zombie[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "bye horde" << std::endl;
	delete[] this->n_zombie;
}


Zombie *ZombieHorde::get_horde()
{
	return (this->n_zombie);
}
