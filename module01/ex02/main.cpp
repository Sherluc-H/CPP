/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:12:41 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/11 17:50:29 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	Zombie z1("bie", "type");
	ZombieEvent z_event;
	z_event.setZombieType("type1");
	Zombie *a = z_event.newZombie("name1");
	Zombie *a1 = z_event.randomChump();
	z_event.setZombieType("type2");
	Zombie *b = z_event.newZombie("name2");
	//delete z_event;

	//z_event = new ZombieEvent("type2");

	//z_event->setZombieType("type2");
	//delete z_event;
	std::cout << "1" << std::endl;
	a->advert();
	a1->advert();

	b->advert();
	b->advert();
	z1.advert();
	//a->advert();
	std::cout << "2" << std::endl;
	delete a;
	delete a1;
	delete b;
	//delete b;
}
