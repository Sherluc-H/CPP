/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:12:41 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/23 01:01:22 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie z1("ABC", "Walker");
	ZombieEvent z_event;
	z_event.setZombieType("Runner");
	Zombie *a = z_event.newZombie("DEF");
	Zombie *a1 = z_event.randomChump();
	z_event.setZombieType("Flyer");
	Zombie *b = z_event.newZombie("GHI");

	a->announce();
	a1->announce();
	b->announce();
	b->announce();
	z1.announce();

	delete a;
	delete a1;
	delete b;

	return (0);
}
