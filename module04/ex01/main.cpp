/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 15:19:58 by lhuang            #+#    #+#             */
/*   Updated: 2020/04/26 19:14:30 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main(void)
{
	Character *me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	delete pr;
	delete pf;
	delete me;

	Character *character = new Character("character");

	SuperMutant *a = new SuperMutant();

	character->attack(a);
	std::cout << *character;
	std::cout << *character;

	AWeapon *aw;
	PowerFist pf2;
	aw = &pf2;
	character->equip(aw);
	character->attack(a);
	character->attack(a);
	character->attack(a);
	character->attack(a);
	std::cout << *character;
	character->recoverAP();
	std::cout << *character;
	delete character;

	return (0);
}
